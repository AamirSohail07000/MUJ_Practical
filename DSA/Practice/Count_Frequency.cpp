// Count Frequency of Elements (for small values like 0-9)
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[10] = {0}; // assuming elements are in range 0-9

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Frequencies:\n";
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0)
            cout << i << " occurs " << freq[i] << " times\n";
    }

    return 0;
}

// Concept:

// Use a count array (or hash map for large values) to keep track of each element’s frequency.

// Suitable for arrays with small range of values.
// EXPLANATION
// int n = sizeof(arr) / sizeof(arr[0]);
// Breakdown:
// sizeof(arr)

// Gives the total size of the array in bytes.

// Example: If arr[] = {10, 20, 30, 40}, then:

// Each int takes 4 bytes (on most systems).

// Total size = 4 elements × 4 bytes = 16 bytes.

// sizeof(arr[0])

// Gives the size of one element of the array.
// Since arr[0] is an int, it usually takes 4 bytes.
// So:
// n = sizeof(arr) / sizeof(arr[0]);
// n = 16 / 4 = 4;