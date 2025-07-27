// Concept:
// Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly compares adjacent elements and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

// Working:

// In each pass, the largest unsorted element “bubbles up” to its correct position.

// It takes n-1 passes for n elements.

// Time Complexity:

// Worst & Average: O(n²)

// Best: O(n) [when array is already sorted, using a flag to check for swaps]

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        bool swapped = false;  // optimization
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap if elements are in wrong order
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break; // If no swaps, array is already sorted
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
