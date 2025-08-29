// Implementation : Stack using Linked List

#include <iostream>
using namespace std;

// Node of linked list
struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;   // pointer to top element

public:
    Stack() { top = NULL; }

    // push element
    void push(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = top;
        top = temp;
        cout << x << " pushed\n";
    }

    // pop element
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << top->data << " popped\n";
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // see top element
    void peek() {
        if (top == NULL) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Top element = " << top->data << "\n";
    }

    // check empty
    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.peek();
    s.pop();
    s.peek();
    return 0;
}
