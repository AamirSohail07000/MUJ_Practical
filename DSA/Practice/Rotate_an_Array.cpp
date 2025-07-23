// Left Rotate an Array by One Position

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = arr[0]; // store the first element

    // Shift all elements one position to the left
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }

    // Move the first element to the end
    arr[n - 1] = first;

    cout << "Left Rotated Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}


// Concept:

// Temporarily store the first element.

// Shift all elements left by 1.

// Place the first element at the end.