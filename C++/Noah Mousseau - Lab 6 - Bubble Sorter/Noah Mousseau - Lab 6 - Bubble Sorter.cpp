#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    int actions = 0;
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                actions = actions + 3;
            }
            else {
                actions++;
            }
        }
    }
    cout << "Sorted list: {" << arr[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << arr[i];
    }
    cout << "} " << actions << " Actions Performed" << endl;
}

int main()
{
    int arr1[] = { 1,3,7,5,2,4,6,8,9,10 };
    int N1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = { 10,9,8,7,6,5,4,3,2,1 };
    int N2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = { 1,10,2,9,3,8,4,7,5,6 };
    int N3 = sizeof(arr3) / sizeof(arr3[0]);
    bubbleSort(arr1, N1);
    bubbleSort(arr2, N2);
    bubbleSort(arr3, N3);
}