// Find Factorial using Iteration (to compare)

#include <iostream>
using namespace std;

int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " = " << factorialIterative(n) << endl;
    return 0;
}
