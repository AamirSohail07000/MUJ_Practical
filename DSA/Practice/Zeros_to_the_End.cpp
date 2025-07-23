// Move All Zeros to the End

#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0; // count is index of the next non-zero element

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill remaining positions with zero
    while (count < n) {
        arr[count++] = 0;
    }

    cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}


// Concept:

// Use two pointers: one to iterate and one to track placement.

// Move non-zero elements first, then fill the rest with zero.