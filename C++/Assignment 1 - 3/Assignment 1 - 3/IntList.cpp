//Problem 3 - getIntersection function implementation
//Assuming functions for IntList have been created
IntList& getIntersection(IntList& intList1, IntList& intList2) {
    IntList result; // Create an empty result linked list
    IntList::iterator it1 = intList1.begin();
    IntList::iterator it2 = intList2.begin();
    //Traverse through input lists
    while (it1 != intList1.end() && it2 != intList2.end()) {
        if (*it1 == *it2) {
            //If values are the same, add to IntList result
            result.push_back(*it1);
            ++it1;
            ++it2;
        }
        //To move it1 forward if it1 element is smaller (assumes both lists are sorted)
        else if (*it1 < *it2) {
            ++it1;
        }
        //To move it2 forward if it2 element is smaller (assumes both lists are sorted)
        else {
            ++it2;
        }
    }
    //Replace intList1 with result
    intList1 = result;
    //Return reference to replaced intList1
    return intList1;
}
//Estimating big-O complexity:
//The big-O complexity should simply be O(N), where N is the length of the shorter IntList
//The number of iterations through a list is given by the length of the shorter list
//Therefore, the big-O complexity should be the length of the shorter IntList