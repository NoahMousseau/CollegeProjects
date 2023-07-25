#include "Computer.h"
#include <iostream>

using namespace std;
void insertionSort(Computer arr[], int n);

int main() {
	int r1, r2, r3, r4, r5;
	cout << "Input 5 ram amounts (GB): ";
	cin >> r1 >> r2 >> r3 >> r4 >> r5;
	Computer c1("RTX 2080", r1, 8);
	Computer c2("RTX 2080", r2, 12);
	Computer c3("RTX 2080", r3, 16);
	Computer c4("RTX 2080", r4, 24);
	Computer c5("RTX 2080", r5, 32);

	Computer cArr[5];
	cArr[0] = c1;
	cArr[1] = c2;
	cArr[2] = c3;
	cArr[3] = c4;
	cArr[4] = c5;

	cout << "Array after sorting: ";
	insertionSort(cArr, 5);
	cout << cArr[0] << " " << cArr[1] << " " << cArr[2] << " " << cArr[3] << " " << cArr[4] << endl;
}

void insertionSort(Computer list[], int length)
{
	for (int firstOutOfOrder = 1; firstOutOfOrder < length;
		firstOutOfOrder++)
		if (list[firstOutOfOrder] < list[firstOutOfOrder - 1]) {
			Computer temp = list[firstOutOfOrder];
			int location = firstOutOfOrder;
			do {
				list[location] = list[location - 1];
				location--;
			} while (location > 0 && list[location - 1] > temp);
			list[location] = temp;
		}
}