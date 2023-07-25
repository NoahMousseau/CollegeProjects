#pragma once

using namespace std;

template <typename T> class DynamicArray {
private:
	T* ptrArray;
	int size;
	int position;
public:
	void addElement(T e) {
		if (position < size) {
			ptrArray[position++] = e;
		}
	};
	T getElement(int p) const {
		return ptrArray[p];
	};
	int getSize() const {
		return position;
	};
	DynamicArray(int s) {
		ptrArray = new T[s];
		size = s;
	};
};