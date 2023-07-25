#include "ComputerClass.h"

template <class T>
void swapValues(T& val1, T& val2);
template <class T>
void bubbleSort(T array[], int size);

int main() {
	cout << "Creating array of Computer Objects...\n";
	cout << "Assigning arbitrary values to Computer Objects...\n";
	const int size = 5;
	//Computer c#("Card",Ram Amount, CPU cores);
	Computer c1("GTX 1060", 16, 32);
	Computer c2("GTX 1070", 8, 16);
	Computer c3("GTX 1080", 10, 12);
	Computer c4("RTX 2070", 12, 24);
	Computer c5("RTX 2080", 14, 18);
	Computer cArray[size] = {c1, c2, c3, c4, c5};
	
	cout << "Displaying contents of array...\n";
	cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << endl;
	
	bubbleSort<Computer>(cArray, 5);
}

template <class T>
void swapValues(T& val1, T& val2) {
    T temp = val1;
    val1 = val2;
    val2 = temp;
}

template <class T>
void bubbleSort(T array[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {
			T temp1 = array[i];
			T temp2 = array[i + 1];
            if (temp1.getCpuCoresAmount() > temp2.getCpuCoresAmount()) {
                swapValues(array[i], array[i + 1]);
            }
        }
    }
	cout << "Displaying sorted contents of array...\n";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}