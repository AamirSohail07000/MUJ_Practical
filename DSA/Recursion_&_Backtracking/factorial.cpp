// Find Factorial using Recursion

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1; // Base case
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
    return 0;
}
