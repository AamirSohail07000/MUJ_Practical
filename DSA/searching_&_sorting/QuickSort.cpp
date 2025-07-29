// Quick Sort (Basic Idea)
// Concept:
// Another Divide and Conquer algorithm.

// Pick a pivot, partition array so that smaller elements go left, larger elements go right.

// Recursively apply on left and right parts.

// Time Complexity:

// Best & Average: O(n log n)

// Worst: O(n²) (if pivot chosen poorly)

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose last element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pivot
        quickSort(arr, pi + 1, high); // After pivot
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int x: arr) cout << x << " ";
    return 0;
}
