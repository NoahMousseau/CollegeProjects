#include <iostream>

template <typename Object>
class DoublyList {
private:
    // Creates the nodes for the doubly linked list
    struct Node {
        Object data;
        Node* prev;
        Node* next;
        Node(const Object& d = Object(), Node* p = nullptr, Node* n = nullptr)
            : data(d), prev(p), next(n) {}
    };

public:
    // Creates the iterator to be used
    class iterator {
    public:
        iterator(Node* node) : current(node) {}

        Object& operator*() {
            return current->data;
        }

        Object& getData() {
            return current->data;
        }

        iterator& operator++() {
            current = current->next;
            return *this;
        }

        iterator& operator--() {
            current = current->prev;
            return *this;
        }

        bool operator==(const iterator& rhs) const {
            return current == rhs.current;
        }

        bool operator!=(const iterator& rhs) const {
            return !(*this == rhs);
        }

    private:
        Node* current;
        friend class DoublyList;
    };

    // Creates the constant iterator to be used
    class const_iterator {
    public:
        const_iterator(const Node* node) : current(node) {}

        const Object& operator*() const {
            return current->data;
        }

        const_iterator& operator++() {
            current = current->next;
            return *this;
        }

        const_iterator& operator--() {
            current = current->prev;
            return *this;
        }

        bool operator==(const const_iterator& rhs) const {
            return current == rhs.current;
        }

        bool operator!=(const const_iterator& rhs) const {
            return !(*this == rhs);
        }

    private:
        const Node* current;
        friend class DoublyList;
    };

    // Constructor
    DoublyList() {
        init();
    }

    // Destructor
    ~DoublyList() {
        clear();
        delete head;
        delete tail;
    }

    // Copy constructor
    DoublyList(const DoublyList& other) {
        init();
        *this = other;
    }

    // Copy assignment operator
    DoublyList& operator=(const DoublyList& other) {
        if (this != &other) {
            clear();
            for (const_iterator itr = other.begin(); itr != other.end(); ++itr)
                push_back(*itr);
        }
        return *this;
    }

    // Check if the list is empty
    bool empty() const {
        return theSize == 0;
    }

    // Return the number of elements in the list
    int size() const {
        return theSize;
    }

    // Insert an element at the front of the list
    void push_front(const Object& x) {
        insert(begin(), x);
    }

    // Insert an element at the back of the list
    void push_back(const Object& x) {
        insert(end(), x);
    }

    // Remove the element at the front of the list
    void pop_front() {
        erase(begin());
    }

    // Remove the element at the back of the list
    void pop_back() {
        erase(--end());
    }

    // Iterator to the beginning of the list
    iterator begin() {
        return iterator(head->next);
    }

    // Constant iterator to the beginning of the list
    const_iterator begin() const {
        return const_iterator(head->next);
    }

    // Iterator to the end of the list
    iterator end() {
        return iterator(tail);
    }

    // Constant iterator to the end of the list
    const_iterator end() const {
        return const_iterator(tail);
    }

    // Insert an element before the specified iterator position
    iterator insert(iterator itr, const Object& x) {
        Node* p = itr.current;
        theSize++;
        return iterator(p->prev = p->prev->next = new Node(x, p->prev, p));
    }

    // Erase the element at the specified iterator position
    iterator erase(iterator itr) {
        Node* p = itr.current;
        iterator retVal(p->next);
        p->prev->next = p->next;
        p->next->prev = p->prev;
        delete p;
        theSize--;
        return retVal;
    }

    // Remove all elements from the list
    void clear() {
        while (!empty())
            pop_front();
    }

private:
    int theSize;
    Node* head;
    Node* tail;

    // Initialize the list
    void init() {
        theSize = 0;
        head = new Node;
        tail = new Node;
        head->next = tail;
        tail->prev = head;
    }
};
