#include <iostream>
#include "MyLinkedList.cpp"
#include "MyDoublyLinkedList.cpp"
#include "TestClass.cpp"

using namespace std;

//Linked lists
//  -Not stored contiguously in memory
//  -No upper limit on amount of elements that can be added
//  -Can have elements added/removed in constant time
//      *ie. the time it takes to remove/add and element is not
//       proportional to size of list

//A simple linked list: singly-linked list
//A set of nodes, ie. a pointer, that points to the next node of
//the list, which is NULL for the last node of the list
//  100[->]200[->]300[NULL] 
//Example of a linked list:
/*struct Node
{
    Node(int val) : data(val), next(nullptr) {};
    int data; // Data element
    Node* next; // Pointer to the next node
};*/
//Must use correct order of steps to add or remove a node from
//linked list. Memory must be freed up

int main()
{
    //To create a linked list:
    LinkedList* myList = nullptr;
    myList = new LinkedList();
    //To add to linked list, use function:
    myList->append(9);
    myList->append(1);
    myList->append(2);
    myList->append(4);
    myList->display();
    //To remove from linked list:
    myList->remove(2); //Removes element specified
    myList->display();
    //To add element to front of list:
    myList->push_front(5);
    myList->display();
    //To get size of linked list at this point
    cout << myList->size() << endl;
    
    //For a more complex, doubly linked list:
    DoublyList<TestClass> doublyList;
    //In order to put objects into doubly linked list
    doublyList.push_back(TestClass(42));
    doublyList.push_back(TestClass(17));
    doublyList.push_back(TestClass(99));
    //To display doubly linked list:
    /*
    for (DoublyList<TestClass>::iterator itr = doublyList.begin(); itr != doublyList.end(); ++itr) {
        //Need to overload << operator for below expression to work
        cout << "Data: " << itr.getData() << endl;
    }
    */
}
