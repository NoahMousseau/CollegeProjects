#include <iostream>

using namespace std;

template <typename T, typename D> 
class Pair {
private:
    T data1;
    D data2;
public:
    Pair(T d1, D d2) {
        data1 = d1;
        data2 = d2;
    }
    void printDataPair() {
        cout << "Data 1: " << data1 << endl;
        cout << "Data 2: " << data2 << endl;
    }
};

int main()
{
    Pair<string, int> mainPair = Pair<string, int>("one",1);
    mainPair.printDataPair();
}



