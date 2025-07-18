#include <iostream>
using namespace std;

// Recursive function to calculate GCD using Euclidean algorithm
int findGCD(int a, int b) {
    return (b == 0) ? a : findGCD(b, a % b);
}

int main() {
    int num1, num2;

    // Prompt user for input
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    // Input validation
    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter only positive integers." << endl;
        return 1;
    }

    // Display the GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << findGCD(num1, num2) << endl;

    return 0;
}
