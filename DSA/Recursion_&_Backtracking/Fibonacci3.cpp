// Find nth Fibonacci Number using Recursion

#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 8;
    cout << n << "th Fibonacci number is " << fib(n) << endl;
    return 0;
}
