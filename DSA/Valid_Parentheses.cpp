// Concept: Valid Parentheses
// The Valid Parentheses problem checks if every opening bracket has a matching closing bracket and that they are properly nested.

// We usually deal with three types of brackets:

// () — round brackets

// {} — curly brackets

// [] — square brackets

// Key Idea:
// We use a stack (LIFO — last in, first out) to keep track of opening brackets:

// Traverse the string character by character.

// If it's an opening bracket ((, {, [), push it onto the stack.

// If it's a closing bracket (), }, ]):

// Check if the stack is empty (if empty → invalid).

// Pop the top of the stack and see if it matches the type of the closing bracket.

// After processing the entire string:

// If the stack is empty → Valid.

// If not → Invalid.

    // Example
    // Input:

    // { [ ( ) ] }

// Stack processing:

// { → push → stack = {

// [ → push → stack = { [

// ( → push → stack = { [ (

// ) → pop ( (matches) → stack = { [

// ] → pop [ (matches) → stack = {

// } → pop { (matches) → stack = empty ✅ Valid


// Q: Check if the given string of brackets is valid.
// Example:
// Input: {[()]}
// Output: Valid


#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        // If opening bracket, push to stack
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        // If closing bracket, check match
        else if (c == ')' || c == '}' || c == ']') {
            if (st.empty()) return false; // No opening for this closing
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false; // Mismatch found
            }
        }
    }
    return st.empty(); // Valid only if stack is empty at the end
}

int main() {
    string s;
    cout << "Enter bracket string: ";
    cin >> s;

    if (isValid(s))
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;

    return 0;
}


// Note-
// How it works:

// Uses a stack to keep track of open brackets.

// Ensures correct order and type matching.

// Runs in O(n) time, O(n) space.
