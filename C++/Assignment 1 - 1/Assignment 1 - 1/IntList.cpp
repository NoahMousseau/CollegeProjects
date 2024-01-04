//Problem 1 - Implementation of reverse function
#include <iostream>

class IntList {
public:
	void removeElements(int val) {
		if (this->head->data == val) { //For if first value in linked list is equal to remove value
			Node* current = head; //Set current node to head
			this->head = this->head->next; 
			delete current; //Remove specified value
		}
		else {
			Node* previous = this->head; //Set previous node to head
			Node* current = head->next; //Set current to next node
			while (current != nullptr) {
				if (current->data == val) {
					//Check if current data is specified value
					break; //Moves on if current data is specified value
				}
				else {
					previous = current;
					current = current->next; //Iterate through list if not correct value
				}
			}
			if (current == nullptr) { //If end is reached with no match
				std::cout << "End of list, no value match" << std::endl;
			}
			else {
				previous->next = current->next; //Sets previous pointer to next
				delete current; //Deletes current data
			}
		}
	};
private:
	struct Node {
		int data;
		Node* next;
		Node(int d, Node* n = nullptr) : data(d), next(n) {
		}
	};
	Node* head;
};