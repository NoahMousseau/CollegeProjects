#include <iostream>
using namespace std;

// Define a Node struct to represent individual elements in the linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Define a LinkedList class to manage the linked list
class LinkedList {
private:
    Node* head; // Pointer to the head of the list

public:
    LinkedList() : head(nullptr) {}

    // Function to add a new element to the end of the list
    void append(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    // Function to print the elements in the list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Function to delete a node with a specific value
    void remove(int val) {
        if (head == nullptr) {
            return;
        }

        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->data != val) {
            current = current->next;
        }

        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    // Function to check if the list is empty
    bool isEmpty() {
        return head == nullptr;
    }

    // Destructor to free memory when the list is destroyed
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    // Count elements in the list
    int size() const
    {
        Node* tmp = head;
        int count = 0;
        while (tmp != NULL) {
            count++;
            tmp = tmp->next;
        }
        return count;
    }

    // Function to add a new element to the front of the list
    void push_front(const int& x) {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }

};