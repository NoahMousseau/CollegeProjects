#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<float> list, int length);
int seqSearch(const vector<float> list, int listLength, float searchItem);
void attemptSort(vector<float> list, int length);

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
	cout << "List of values:\n";
	bubbleSort(v, size);
	cout << " ";
	for (int i = 0; i < size; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "Searching for a value in the list: ";
	float s;
	cin >> s;
	int loc = seqSearch(v, size, s);
	if (loc != -1) {
		cout << "The element was found in position " << loc << " using sequential search.";
	}
	else {
		cout << "The element was not found using sequential search.";
	}
}

void bubbleSort(vector<float> list, int length)
{
	float temp;
	for (int iteration = 1; iteration < length; iteration++) {
		for (int index = 0; index < length - iteration; index++) 
			if (list[index] > list[index + 1]) {
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
	}
}

int seqSearch(const vector<float> list, int listLength, float searchItem) {
	int loc = 0;
	bool found = false;
	while (loc < listLength && !found) {
		if (list[loc] == searchItem) {
			found = true;
		}
		else {
			loc++;
		}
	}
	if (found) {
		return loc;
	}
	else {
		return -1;
	}
};