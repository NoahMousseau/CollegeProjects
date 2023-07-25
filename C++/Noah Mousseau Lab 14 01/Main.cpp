#include "LinkedList.h"
#include "NodeType.h"
#include "Student.h"
#include <iostream>

using namespace std;

int main() {
	Student s1("Clark", "Kent");
	Student s2("Bruce", "Wayne");
	Student s3("Peter", "Parker");
	Student s4("Wendy", "Lawson");
	cout << "Linked List App!\n";
	cout << "-----------------------\n";
	LinkedListType list1;
	list1.addFirst(s4);
	list1.addFirst(s1);
	list1.addFirst(s2);
	list1.addFirst(s3);
	list1.display();
	cout << list1.getFirst().getFirstName() << " " << list1.getFirst().getLastName() << endl;
	cout << list1.getLast().getFirstName() << " " << list1.getLast().getLastName();
}