using namespace std;

#include <iostream>

int main() {
	//Initializes array and gets size for it from user
	int* array;
	int userInput;
	cout << "Input size of array of numbers: ";
	cin >> userInput;
	array = new int[userInput];

	//Fills array with user input
	for (int i = 0; i < userInput; i++) {
		cout << "Input value for " << i << " place in array: ";
		int value;
		cin >> value;
		while (value < 0) {
			cout << "Input cannot be negative, try again: ";
			cin >> value;
		}
		array[i] = value;
	}
	
	//Calculates average of array
	int sum = 0;
	for (int i = 0; i < userInput; i++) {
		sum += array[i];
	}
	float average = static_cast<float>(sum) / userInput;
	cout << average;
	

	//Deletes array memory
	delete [] array;
}