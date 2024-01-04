//Problem 4 - SpecialQueue enqueue and dequeue functions
//Assuming IntClass and IntStack has been implemented as in Problem 2

class SpecialQueue {
public:
    //Enqueue function pushes x onto stack
    void enqueue(const int& x) {
        inbox.push(x);
    }
    //Value x is dequeue by being popped from the outbox IntStack
    void dequeue(int& x) {
        if (outbox.isEmpty()) { //If outbox is empty, tranfers inbox elements to outbox until inbox is empty
            while (!inbox.isEmpty()) {
                int top_element;
                inbox.pop(top_element);
                outbox.push(top_element);
            }
        }
        //Removes elements from outbox if outbox is not empty
        if (!outbox.isEmpty()) {
            outbox.pop(x);
        }
    }
private:
    IntStack inbox;
    IntStack outbox;
};
