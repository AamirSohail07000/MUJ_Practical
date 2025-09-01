// Concept: Min Stack

// A Min Stack is a stack that, along with regular push and pop operations, can return the minimum element in O(1) time.
// We maintain:

// Main stack → Stores all elements.

// Auxiliary stack (min stack) → Stores minimum elements at each state.

// Whenever we push:

// Push element to main stack.

// If min stack is empty or element ≤ top of min stack, push it to min stack.

// Whenever we pop:

// Pop element from main stack.

// If popped element equals min stack top, pop it from min stack too.

// getMin() → Return top of min stack in O(1).


// Q1. Design a Min Stack and perform push, pop, top, and getMin

#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<int> s, minS;
public:
    void push(int x) {
        s.push(x);
        if(minS.empty() || x <= minS.top()) minS.push(x);
    }
    void pop() {
        if(s.top() == minS.top()) minS.pop();
        s.pop();
    }
    int top() { return s.top(); }
    int getMin() { return minS.top(); }
};

int main() {
    MinStack ms;
    ms.push(5);
    ms.push(2);
    ms.push(8);
    cout << "Min: " << ms.getMin() << endl; // 2
    ms.pop();
    cout << "Min: " << ms.getMin() << endl; // 2
    ms.pop();
    cout << "Min: " << ms.getMin() << endl; // 5
}
