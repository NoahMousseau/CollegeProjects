#include <iostream>
#include <algorithm>

using namespace std;

int sum(const int array[], const int size);
int recursiveSum(const int array[], const int size, const int position);
int recursiveMax(const int array[], const int size, const int position);
int recursiveMin(const int array[], const int size, const int position);

int main() {
	int a1[] = {8,3,4,84,39,32,18,54,76,0,4};
	cout << "Recursive functions!\n";
	cout << "--------------------\n";
	cout << "[ ";
	for (int i = 0; i < 11; i++) {
		cout << a1[i] << " ";
	}
	cout << "]\n";
	cout << "Sum: " << sum(a1, 11) << endl;
	cout << "Recursive sum: " << recursiveSum(a1, 11, 0) << endl;
	cout << "Recursive max: " << recursiveMax(a1, 11, 0) << endl;
	cout << "Recursive min: " << recursiveMin(a1, 11, 0) << endl;
}

int sum(const int array[], const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + array[i];
	}
	return sum;
};

int recursiveSum(const int array[], const int size, const int position) {
	if (position >= size) {
		return 0;
	}
	else {
		return array[position] + recursiveSum(array, size, position + 1);
	}
};

int recursiveMax(const int array[], const int size, const int position) {
	if (position >= size) {
		return INT_MIN;
	}
	else {
		if (array[position] > recursiveMax(array, size, position + 1)) {
			return array[position];
		}
		else {
			return recursiveMax(array, size, position + 1);
		}
	}
};

int recursiveMin(const int array[], const int size, const int position) {
	if (position == size - 1) {
		return array[position];
	}
	else {
		if (array[position] < recursiveMin(array, size, position + 1)) {
			return array[position];
		}
		else {
			return recursiveMin(array, size, position + 1);
		}
	}
};