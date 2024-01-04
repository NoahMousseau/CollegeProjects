
#include "HashTable.h"

//Constructor
template <typename DataType, typename KeyType>
HashTable<DataType, KeyType>::HashTable(int initTableSize)
{
	tableSize = initTableSize;
	dataTable = new BSTree<DataType, KeyType>[tableSize];
}
//Copy constructor
template <typename DataType, typename KeyType>
HashTable<DataType, KeyType>::HashTable(const HashTable& other)
{
	copyTable(other);
}
//Assignment operator
template <typename DataType, typename KeyType>
HashTable<DataType, KeyType>& HashTable<DataType, KeyType>::operator=(const HashTable& other)
{
	if (this != &other) {
		clear();
		copyTable(other);
	}
	return *this;
}
//Destructor
template <typename DataType, typename KeyType>
HashTable<DataType, KeyType>::~HashTable()
{
	clear();
	delete[] dataTable;
}
//Insert
template <typename DataType, typename KeyType>
void HashTable<DataType, KeyType>::insert(const DataType& newDataItem)
{
	int hashValue = hashFunction(newDataItem.getKey());
	dataTable[hashValue].insert(newDataItem);
}
//Remove
template <typename DataType, typename KeyType>
bool HashTable<DataType, KeyType>::remove(const KeyType& deleteKey)
{
	int hashValue = hashFunction(deleteKey);
	return dataTable[hashValue].remove(deleteKey);
}
//Retrieve
template <typename DataType, typename KeyType>
bool HashTable<DataType, KeyType>::retrieve(const KeyType& searchKey, DataType& returnItem) const
{
	int hashValue = hashFunction(searchKey);
	bool found = dataTable[hashValue].retrieve(searchKey, returnItem);

	if (!found) {
		returnItem = DataType(); //Set returnItem to an undefined state
	}
	return found;
}
//Clear
template <typename DataType, typename KeyType>
void HashTable<DataType, KeyType>::clear()
{
	//Goes through each BSTree in the HashTable, calls clear() function on every BSTree
	for (int i = 0; i < tableSize; ++i) {
		dataTable[i].clear();
	}
}
//isEmpty
template <typename DataType, typename KeyType>
bool HashTable<DataType, KeyType>::isEmpty() const
{
	for (int i = 0; i < tableSize; ++i) {
		if (!dataTable[i].isEmpty()) {
			return false;
		}
	}
	return true;
}
//show10 file
#include "show10.cpp"
//Standard deviation
template <typename DataType, typename KeyType>
double HashTable<DataType, KeyType>::standardDeviation() const
{
	//Calculate the mean (average number of keys per bucket)
	double mean = 0;
	for (int i = 0; i < tableSize; ++i) {
		mean += dataTable[i].getCount();
	}
	mean /= tableSize;
	//Calculate variance
	double variance = 0;
	for (int i = 0; i < tableSize; ++i) {
		double deviation = dataTable[i].getCount() - mean;
		variance += deviation * deviation;
	}
	variance /= tableSize;
	//Calculate standard deviation (square root of variance)
	double stdDeviation = sqrt(variance);
	return stdDeviation;
}

template <typename DataType, typename KeyType>
void HashTable<DataType, KeyType>::copyTable(const HashTable& source)
{
}
