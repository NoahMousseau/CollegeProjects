#include <iostream>
#include <vector>

using namespace std;

vector<int> setUnion(vector<int> v1, vector<int> v2);
vector<int> setIntersect(vector<int> v1, vector<int> v2);
vector<int> setRemoval(vector<int> v1, vector<int> v2);
void setSize(vector<int> v1);
void print(vector<int> v1);

int main()
{
    vector<int> A = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> B = { 2, 4, 6, 8, 10};
    vector<int> C = { 1, 3, 5, 7, 9 };
    vector<int> D = { 1, 2, 3, 5, 7 };
    print(setUnion(B, D));
    print(setIntersect(C, D));
    print(setRemoval(A, D));
    setSize(setUnion(C, D));
    setSize(setUnion(setRemoval(C, D), B)); 
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