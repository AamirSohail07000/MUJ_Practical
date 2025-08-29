// Concept of Stack

// Stack is a linear data structure that follows LIFO (Last In, First Out).

// Imagine a stack of plates — the last plate you put on top is the first one you take out.

// Operations:

// push(x) → insert element at top

// pop() → remove element from top

// peek() → see the top element without removing

// isEmpty() → check if stack is empty

#include <iostream>
using namespace std;

#define MAX 5   // max size of stack

class Stack {
    int arr[MAX];  
    int top;       // index of top element

public:
    Stack() { top = -1; }

    // push an element
    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow (No space left)\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed\n";
    }

    // pop element
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow (Empty stack)\n";
            return;
        }
        cout << arr[top--] << " popped\n";
    }

    // see top element
    void peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Top element = " << arr[top] << "\n";
    }

    // check empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.pop();
    s.peek();
    return 0;
}
