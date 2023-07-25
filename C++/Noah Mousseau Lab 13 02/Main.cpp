#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<float> &v, int length);
int binarySearch(const vector<float> v, int length, float searchItem);

int main() {
	vector<float> v;
	float t = 1;
	cout << "Searching app!\n";
	cout << "----------------\n";
	while (t >= 0) {
		float temp;
		cout << "Enter a positive number (or a negative number to stop): ";
		cin >> temp;
		t = temp;
		if (t >= 0) {
			v.push_back(temp);
		}
	}
	int size = v.size();
	cout << "List of values: \n";
	insertionSort(v, size);
	for (int i = 0; i < size; i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
	cout << "Search for a value in the list: ";
	float searchItem;
	cin >> searchItem;
	float search = binarySearch(v, size, searchItem);
	if (search != -1) {
		cout << "The element was found in position " << search << " using binary search.";
	}
	else {
		cout << "The element was not found using binary search.";
	}
}

void insertionSort(vector<float> &v, int length)
{
	for (int firstOutOfOrder = 1; firstOutOfOrder < length;
		firstOutOfOrder++)
		if (v[firstOutOfOrder] < v[firstOutOfOrder - 1]) {
			float temp = v[firstOutOfOrder];
			int location = firstOutOfOrder;
			do {
				v[location] = v[location - 1];
				location--;
			} while (location > 0 && v[location - 1] > temp);
			v[location] = temp;
		}
}

int binarySearch(const vector<float> v, int length, float searchItem) {
	int first = 0;
	int last = length - 1;
	int mid;
	bool found = false;
	while (first <= last && !found) {
		mid = (first + last) / 2;
		if (v[mid] == searchItem) {
			found == true;
		}
		else if (v[mid] > searchItem) {
			last = mid - 1;
		}
		else {
			first = mid + 1;
		}
	}
	if (found) {
		return mid;
	}
	else {
		return -1;
	}
};