// Find Missing Number from 1 to N

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int total_n = n + 1; // because one number is missing

    // Formula for sum of first N natural numbers
    int expected_sum = total_n * (total_n + 1) / 2;

    int actual_sum = 0;
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    int missing = expected_sum - actual_sum;

    cout << "Missing number is: " << missing << endl;
    return 0;
}

// Concept:

// Use the formula for the sum of first N natural numbers:
// Sum = N×(N+1)/2
// Subtract actual array sum from this to find the missing number.