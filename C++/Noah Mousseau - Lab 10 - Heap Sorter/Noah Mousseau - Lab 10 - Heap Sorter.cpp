#include <iostream>
using namespace std;

//Heapify a subtree rooted with node i, n is size of heap
void heapify(int arr[], int n, int i)
{
	int largest = i; //Initialize largest variable to root(i.e. i)
	int l = 2 * i + 1; //left = 2*i + 1
	int r = 2 * i + 2; //right = 2*i + 2
	//If left child > root
	if (l < n && arr[l] > arr[largest]) {
		largest = l;
	}
	//If right child > largest value
	if (r < n && arr[r] > arr[largest]) {
		largest = r;
	}
	//If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);
		//Call heapify to set largest value to root
		heapify(arr, n, largest);
	}
}

//Function for heap sort
void heapSort(int arr[], int n)
{
	//Build heap
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}
	//Extract element from array
	for (int i = n - 1; i >= 0; i--) {
		//Move current root to end
		swap(arr[0], arr[i]);
		//Call max heapify
		heapify(arr, i, 0);
	}
}

void heapSort() {
	int heapSize = 1;
	cout << "Enter size of array to sort: ";
	cin >> heapSize;
	//Lets user dynamically generate different sizes of array
	int* array = (int*)malloc(sizeof(int) * heapSize);
	cout << "Enter elements of array: \n";
	int arrayValue;
	for (int i = 0; i < heapSize; ++i) {
		//Gets user input and assigns it to array[i]
		cin >> arrayValue;
		array[i] = arrayValue;
	}
	//Sorts array
	heapSort(array, heapSize);
	//Prints sorted user array
	cout << "\nArray after Heap Sort: \n";
	for (int i = 0; i < heapSize; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
	free(array);
}

// Driver program
int main()
{
	heapSort();
	heapSort();
	heapSort();
	heapSort();
	heapSort();
}