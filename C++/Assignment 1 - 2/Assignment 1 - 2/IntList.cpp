//Problem 2 - Reverse function implementation for class IntList
//Assuming functions have been implemented by class IntList
void reverse() {
    IntList input; 
    IntList output; 
    IntStack s;

    //Iterate through input and push items onto stack
    IntList::iterator it = input.begin();
    while (it != input.end()) {
        s.push(*it); //Push the current element onto stack
        ++it; //Move to the next element in input
    }

    //Pop elements from stack, iterate and add to output
    while (!s.isEmpty()) {
        int value;
        s.pop(value); //Pop the top element from the stack
        output.push_back(value); //Add to output IntList
    }
}