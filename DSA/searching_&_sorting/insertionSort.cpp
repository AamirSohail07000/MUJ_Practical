// Insertion Sort
// 📘 Concept:
// Build the sorted array one element at a time.

// Pick an element and insert it into its correct position among the already sorted part.

// Time Complexity:

// Best: O(n) (already sorted)

// Worst: O(n²)

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insert key in right place
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);

    cout << "Sorted array: ";
    for(int x: arr) cout << x << " ";
    return 0;
}
