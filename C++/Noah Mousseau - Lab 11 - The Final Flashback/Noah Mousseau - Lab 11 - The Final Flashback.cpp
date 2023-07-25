#include <iostream>
#include <vector>

using namespace std;

vector<int> setUnion(vector<int> v1, vector<int> v2);
vector<int> setIntersect(vector<int> v1, vector<int> v2);
vector<int> setRemoval(vector<int> v1, vector<int> v2);
void setSize(vector<int> v1);
void print(vector<int> v1);
void heapSort(int arr[], int n);
void heapSort();
void baseConverter(int value, int base);
void truthTable(bool A, bool B, bool C);
void decoder(string n);

int main()
{
    //Decoder
    cout << "Decoder: " << endl;
    decoder("Lo cebo dy nbsxu iyeb Yfkvdsxo");
    //Base converter
    cout << "Base converter: " << endl;
    baseConverter(871, 7);
    //Heap sorter
    cout << "Heap sorter: " << endl;
    heapSort();
    //Set theory
    cout << "Set theory: " << endl;
    vector<int> A = {1,2,3,5,8,13};
    vector<int> B = {1,3,5,7,9,11,13,15,17,19};
    vector<int> C = {1,2,3,5,7,11,13,17,19};
    print(setIntersect(setUnion(A, B), C));
    //Truth table
    cout << "Truth table: " << endl;
    truthTable(false, false, false);
    truthTable(false, false, true);
    truthTable(false, true, false);
    truthTable(false, true, true);
    truthTable(true, false, false);
    truthTable(true, false, true);
    truthTable(true, true, false);
    truthTable(true, true, true);
}

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

void decoder(string n) {
    int size = n.length();
    //For loop to cycle through every possible shift value
    for (int i = 1; i <= 26; i++) {
        //For loop to go through each char in input string
        for (int j = 0; j < size; j++) {
            if (n[j] == ' ') { //Checks for spaces
                cout << ' ';
            }
            else if (isupper(n[j])) {
                cout << char((n[j] + i - 65) % 26 + 65);
            }
            else {
                cout << char((n[j] + i - 97) % 26 + 97);
            }
        }
        cout << endl;
    }
};

void baseConverter(int value, int base) {
    //Vector to store individual number outputs
    vector<int> storage;
    cout << "Input number to be converted: " << value << endl;
    cout << "Input base to convert to: " << base << endl;
    //While loop to find individual number outputs and convert bases
    while (value > 0) {
        int mod = value % base;
        storage.push_back(mod);
        value /= base;
    }
    cout << "Output of initial value in base " << base << " is: ";
    int size = storage.size();
    //For loop to reverse the output of the storage vector
    for (int i = size - 1; i > -1; i--) {
        cout << storage[i];
    }
    cout << endl;
};

void truthTable(bool A, bool B, bool C) {
    cout << "Input: A = " << A << " B = " << B << " C = " << C << endl;
    bool result;
    bool D;
    bool E;
    if ((A == true && C == false) || (A == false && C == true)) {
        D = true;
    } else {
        D = false;
    }
    if (B == true || A == true) {
        E = true;
    } else {
        E = false;
    }
    if ((D == true && E == false) || (D == false && E == true) || (D == false && E == false)) {
        result = true;
    } else {
        result = false;
    }
    cout << "Result: " << result << endl;
}

vector<int> setUnion(vector<int> v1, vector<int> v2) {
    vector<int> v3;
    //Adds values in set 1 to main set
    for (int i = 0; i < v1.size(); i++) {
        v3.push_back(v1[i]);
    }
    //Adds different values in set 2 to main set
    for (int i = 0; i < v2.size(); i++) {
        int count = 0;
        for (int j = 0; j < v1.size(); j++) {
            if (v2[i] == v1[j]) {
                count++;
            }
        }
        if (count == 0) {
            v3.push_back(v2[i]);
        }
    }
    return v3;
};

vector<int> setIntersect(vector<int> v1, vector<int> v2) {
    vector<int> v3;
    //Adds exclusively similar values in sets to main set
    for (int i = 0; i < v2.size(); i++) {
        int count = 0;
        for (int j = 0; j < v1.size(); j++) {
            if (v2[i] == v1[j]) {
                count++;
            }
        }
        if (count != 0) {
            v3.push_back(v2[i]);
        }
    }
    return v3;
};

vector<int> setRemoval(vector<int> v1, vector<int> v2) {
    vector<int> v3;
    //Adds exclusive values of first set to main set
    int count;
    for (int i = 0; i < v1.size(); i++) {
        count = 0;
        for (int j = 0; j < v2.size(); j++) {
            if (v1[i] == v2[j]) {
                count++;
                break;
            }
        }
        if (count == 0) {
            v3.push_back(v1[i]);
        }
    }
    return v3;
};

void print(vector<int> v1) {
    cout << "{ ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << "}" << endl;
}

void setSize(vector<int> v1) {
    int size = v1.size();
    cout << "Size of set: " << size << endl;
};