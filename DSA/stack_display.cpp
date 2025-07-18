// Program Name: stack_display.cpp
// Purpose: Create a stack with values {10, 20, 30, 40} and display them in LIFO order

#include <iostream>     // For input and output
#include <stack>        // For using stack container
using namespace std;

//NOTE: UNCOMMENT THE BELOW LINE for unext test case
#ifndef __CXX_TEST_MAIN__

int main() {
    // Declare a stack of integers
    stack<int> numberStack;

    // Push values into the stack (LIFO order: Last In, First Out)
    numberStack.push(10);
    numberStack.push(20);
    numberStack.push(30);
    numberStack.push(40);

    // Display stack elements
   
    while (!numberStack.empty()) {
        // Print the top element
        cout << numberStack.top() << " ";
        // Remove the top element
        numberStack.pop();
    }

    cout << endl; // New line for clean output

    return 0; // End of program
}

//NOTE: UNCOMMENT THE BELOW LINE for unext test case
#endif