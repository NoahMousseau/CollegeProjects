#include <string>

//Hash tables
//Can we do better than an amortized complexity of O(logN) on a splay tree
//Goal: Insertion, deletion, and access in O(1)
//Hash Tables: Do not support operations requiring ordering of elements
//	-findMin
//	-findMax
//	-printing elements in sorted order

//Hash Table: An array of fixed size, containing the items A[0], A[1], ..., A[TableSize-1]
//All data items stored have a key
//Search operations are performed on the keys
//Each key is mapped onto an integer between 0 and TableSize-1 to etermine the appropriate cell in a
//hash table for a given item
//Mapping from key to cells is done using a hash function
//	-Easy to compute
//	-Maps two distinct keys into two different cells
//A good hash function distributes the keys evenly among table cells

//Key Hash Table decisions:
//	-Hash functions
//	-Hash table size
//	-How to resolve collisions (when two keys hash to the same value)
//Example: h(key) = key mod TableSize
//	-Good choice, if keys are uniformly distributed
//	-If TableSize = 10, and all keys end with 0 => data items will all end up in 0th cell
//	 , would be a bad choice of table size

//Example of a hash function:
int hash(const string& key, int tableSize)
{
	int hashVal = 0;
	for (int i = 0; i < key.length(); i++)
		hashVal += key[i];
	return hashVal % tableSize;
}
//If table size is large => keys are not distributed well

//Second example of a hash function:
int hash(const string& key, int tableSize)
{
	return (key[0] + (27 ^ 1) * key[1] + (27 ^ 2) * key[2]) %
		tableSize;
}
//Assumes a key length >= 3
//Only 28% of the table with 10,007 cells will be used

//Hash function example 3:
int hash(const string& key, int tableSize)
{
	int hashVal = 0;
	for (int i = 0; i < key.length(); i++)
		hashVal = 37 * hashVal + key[i];
	hashVal %= tableSize;
	if (hashVal < 0) //overflow may introduce a negative number
		hashVal += tableSize;
	return hashVal;
}
//Good distribution, but slow for large keys

//Collision Resolution
//Given two keys, k1 and k2, we have a collision at the hash table cell x, if h(k1) = h(k2) = x
//Strategies:
//	-separate chaining
//	-open addressing
//For finding an item with a key value k:
//	-compute the table location h(k)
//	-starting with slot h(k), locate the item containing key k using (if necessary) a collision resolution policy

//Separate Chaining
//Idea: keep a linked list of all elements that has to the same hash table cell
//Assumption: h(x) = x mod 10 and the keys fall into the ten hash table cells
//Find(k):
//	-H(k) = x
//	-Search list x
//Insert(k):
//	-H(k) = x
//	-Search list x, if element is not on the list, insert the element at the front
//Example:
template <typename HashedObj>
class HashTable
{
public:
	explicit HashTable(int size = 101);
	bool contains(const HashedObj& x) const;
	void makeEmpty();
	void insert(const HashedObj& x);
	void remove(const HashedObj& x);
private:
	vector<list<HashedObj> > theLists; // vector of linked lists
	int currentSize;
	void rehash();
	int myhash(const HashedObj& x) const;
};
int hash(const string& key);
int hash(int key);

//myHash
int myhash(const HashedObj& x) const
{
	int hashVal = hash(x);
	hashVal %= theLists.size();
	if (hashVal < 0)
		hashVal += theLists.size();
	return hashVal;
}

//makeEmpty
void makeEmpty()
{
	for (int i = 0; i < theLists.size(); i++)
		theLists[i].clear();
}

//contains
bool contains(const HashedObj& x) const
{
	const list<HashedObj>& whichList = theLists[myhash(x)];
	return find(whichList.begin(), whichList.end(), x) != whichList.end();
}

//remove
bool remove(const HashedObj& x)
{
	list<HashedObj>& whichList = theLists[myhash(x)];
	list<HashedObj>::iterator itr = find(whichList.begin(), whichList.end(), x);
	if (itr == whichList.end())
		return false;
	whichList.erase(itr);
	--currentSize;
	return true;
}

//insert
bool insert(const HashedObj& x)
{
	list<HashedObj>& whichList = theLists[myhash(x)];
	if (find(whichList.begin(), whichList.end(), x) != whichList.end())
		return false;
	whichList.push_back(x);
	// Rehash
	if (++currentSize > theLists.size())
		rehash();
	return true;
}

//Complexity Analysis
//Find:
//	-Time to evaluate the hash => O(1)
//	-Time to traverse the list => O(?)
//In an unsuccessful search, T(N) is given by the average number of elements in the lists
//Size of the table is not important, only the load factor
//	-Make the size of a hash table at least as large as the number of elements expected to be stored in it
//	-Table size = prime number, to ensure good distribution of keys

//Probing Hash Tables
//Disadvantages of separate chaining:
//	-Requires the use of another data structure (linked lists)
//	-Traversal of long linked list can take time
//Open Addressing: when a collision occurs, try alternative cells until an impty cell is found
//f = collision resolution strategy
//	-Linear probing: f(i) = i
//	-Quadratic probing f(i) = i^2
//	-Double hashing f(i) = i * hash(subscript 2)(x)
//Open addressing requires a large hash table with a load factor less than 0.5

//Linear probing:
//h(x) = (x + i) mod TableSize
//Example: TableSize = 10, insert: 89, 18, 49, 58, 69
//Problem: primary clustering (clusters of occupied cells start forming)

//Quadratic probing:
//h(x) = (x + i^2) mod TableSize
//Eliminates primary clustering problem
//Example: TableSize = 10, insert 89, 18, 49, 58, 69
//If we delete 89, the next search will fail => use lazy deletion
//Elements that has to the same cell will probe the same alternative cells
//Problem: secondary clustering

//Double Hashing:
//h(x) = (x + i * hash(subscript 2)(x)) mod TableSize
//Example: TableSize = 10, R = 7 insert: 89, 18, 49, 58

//Rehashing: if table too full => slow operations due to a large number of collisions
//Solution: build a table twice as big (next prime number) and rehash
//When to rehash:
//	-When the table is half full
//	-When an insertion fails
//	-When a certain load factor is reached

//Hash Table Applications:
//	-Compilers: symbol tables, keep track of declared variables in a source code file
//	-Graph problems: map names into integers
//	-Games: transposition table keep track of player positions
//	-Spellchecker: each word can be checked against a dictionary for misspellings in constant time