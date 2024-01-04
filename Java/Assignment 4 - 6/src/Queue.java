public class Queue {
    private int[] elements;
    private int size;
    private static final int DEFAULT_CAPACITY = 8;

    //Constructor to create a Queue object with default capacity 8
    public Queue() {
        elements = new int[DEFAULT_CAPACITY];
        size = 0;
    }
    //enqueue() implementation to add an element into the queue
    public void enqueue(int v) {
        if (size >= elements.length) {
            // Double the array size if it's full
            int[] newElements = new int[elements.length * 2];
            System.arraycopy(elements, 0, newElements, 0, elements.length);
            elements = newElements;
        }
        elements[size] = v;
        size++;
    }
    //dequeue() implementation to remove and return the element from the queue
    public int dequeue() {
        //
        if (size == 0) {
            System.out.println("Queue is empty");
            return 0;
        }
        int removedElement = elements[0];
        // Shift all elements one position to the left
        for (int i = 0; i < size - 1; i++) {
            elements[i] = elements[i + 1];
        }
        size--;
        return removedElement;
    }
    //empty() implementation
    public boolean empty() {
        return size == 0;
    }
    //getSize() implementation
    public int getSize() {
        return size;
    }
    //Main method for testing
    public static void main(String[] args) {
        Queue queue = new Queue();
        for (int i = 1; i <= 20; i++) {
            queue.enqueue(i);
        }
        while (!queue.empty()) {
            System.out.print(queue.dequeue() + " ");
        }
    }
}
