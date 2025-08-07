// Concept:
// The Fibonacci sequence is: 0, 1, 1, 2, 3, 5, 8, 13, ...
// Formula: F(n) = F(n-1) + F(n-2)
// Base cases: F(0) = 0, F(1) = 1


// Print n Fibonacci Numbers (Recursive)

#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n; // Base cases
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 6;
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++)
        cout << fib(i) << " ";
    cout << endl;
    return 0;
}



