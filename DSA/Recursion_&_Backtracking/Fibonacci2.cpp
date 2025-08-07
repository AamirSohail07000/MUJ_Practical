// Fibonacci using Iteration

#include <iostream>
using namespace std;

void fibonacciIterative(int n) {
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main() {
    int n = 7;
    cout << "Fibonacci sequence: ";
    fibonacciIterative(n);
    return 0;
}
