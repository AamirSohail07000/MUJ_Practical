// Write a C++ program Create a singly linked list with values {10, 20, 30, 40} and display it.

#include <iostream> // Header for input/output operations
using namespace std;
//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE for unext
// #ifndef __CXX_TEST_MAIN__

// Node structure representing each element in the linked list
struct Node {
    int data;       // Value of the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize node with data
    Node(int val) : data(val), next(nullptr) {}
};

// Class to manage the linked list operations
class LinkedList {
private:
    Node* head; // Pointer to the first node
    Node* tail; // Pointer to the last node

public:
    // Constructor to initialize an empty list
    LinkedList() : head(nullptr), tail(nullptr) {}

    // Function to insert a new node at the end of the list
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode; // First node becomes head and tail
        } else {
            tail->next = newNode;  // Append to the list
            tail = newNode;        // Update tail
        }
    }

    // Function to print all elements in the list
    void print() {
        Node* curr = head;
        while (curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

// Main function to test the LinkedList class
int main() {
    LinkedList list;

    // Insert values into the list
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    // Display the list
    list.print();

    return 0;
}


//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE for unext
// #endif