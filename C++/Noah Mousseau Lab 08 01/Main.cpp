#include <iostream>

using namespace std;

float average(int* ptrArray, int size);
int max(int* prtArray, int size);
int min(int* prtArray, int size);

int main() {
	int n;
	cout << "Dynamic array app!\n";
	cout << "---------------------\n";
	cout << "Enter size of the dynamic array: ";
	cin >> n;
	int* ptrArray = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter value in position [" << i << "]: ";
		cin >> ptrArray[i];
	}
	cout << "Values: \n";
	cout << "[";
	for (int i = 0; i < n; i++) {
		cout << "  " << ptrArray[i];
	}
	cout << " ]\n";
	cout << "The average value is: " << average(ptrArray, n) << endl;
	cout << "The maximum value is: " << max(ptrArray, n) << endl;
	cout << "The minimum value is: " << min(ptrArray, n) << endl;
}

float average(int* ptrArray, int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total = total + ptrArray[i];
	}
	float average = total / size;
	return average;
};

int max(int* ptrArray, int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < ptrArray[i]) {
			max = ptrArray[i];
		}
	}
	return max;
};

int min(int* ptrArray, int size) {
	int min = ptrArray[0];
	for (int i = 0; i < size; i++) {
		if (min > ptrArray[i]) {
			min = ptrArray[i];
		}
	}
	return min;
};