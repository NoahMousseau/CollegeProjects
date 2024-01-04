using namespace std;

#include <iostream>
#include <vector>
#include <list>

//Example of Container Operations with Iterators
template <typename Container>
void removeEveryOtherItem(Container& lst) {
    //Creates an iterator at the start of list
    typename Container::iterator itr = lst.begin();
    while (itr != lst.end()) {
        itr = lst.erase(itr); //Erases object in list at itr position
        if (itr != lst.end()) {
            itr++; //Increments itr
        }
    }
}

//Lecture 4 centers on vectors and lists
int main()
{
    //ADT stands for abstract data type: defines a set of operations for actual data types, typically classes
    //List ADT: array, linked list (single and doubly linked). Basic operations: printList, find, findKth, insert,remove
    //STL stands for standard template library, includes implementation of common data structures
    //  These data structures are called collections or containers
    //  Implementations of List ADT:
    //      vector: growable array
    //      list: doubly linked list implementation

    //Common methods of List ADT:
    //  int size() const
    //  void clear()
    //  bool empty()
    //  void push_back(const Object & x)
    //  void pop_back()
    //  const Object & back() const -> returns object at end of list
    //  const Object & front() const -> returns object at front of list

    //List specific methods:
    //  void push_front(const Object & x) -> adds x to the front of list
    //  void pop_front() -> removes object at front of list

    //Vector specific methods:
    //  Object & operator [] (int idx) -> returns object at index, no bounds checking
    //  Object & at(int idx) -> returns object at index, bounds checking
    //  int capacity() const -> returns internal capacity of vector
    //  void reserve(int new Capacity) -> sets new capacity of vector

    //Iterators: element position in a container like list or vector, a built in type, similar to pointers
    //  iterator begin() -> returns appropriate iterator representing the first item in container
    //  iterator end() -> returns appropriate iterator representing the end marker in the container (position after last item)
    //  itr++ and ++itr both advance the iterator to the next location
    //  *itr -> returns a reference to the object stored at the iterator's location
    //  itr1==itr2 -> returns true if iterators refer to same location
    //  itr1!=itr2 -> returns true if iterators refer to different location

    //Example:
    vector<int> main = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    //For loop the uses an iterator instead of index position
    for (vector<int>::iterator itr = main.begin(); itr != main.end(); itr++) {
        //*itr returns reference to object stored at iterator location, in this case a number
        cout << *itr << endl;
    }
}

//Container operations that require iterators:
//  iterator insert(iterator pos, const Object & x) -> adds x into a container prior to the position given by the iterator
//                                                     , returns an iterator representing the position of the inserted item
//  iterator erase(iterator pos) -> removes object at position given by iterator, returns position of element that follows pos
// iterator erase(iterator start, iterator end) -> removes all items from position 'start' up to 'end'
//      Example: c.erase(c.begin(), c.end() )

//const_iterators
//  const_iterator returns a constant reference the the object associated with the iterator. It cannot
//  appear on the left-hand sign of an assignment statement. The compiler will force the use of const_iterator
//  to traverse a constant container
