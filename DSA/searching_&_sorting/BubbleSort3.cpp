// Modify Bubble Sort to check if the array is already sorted and avoid unnecessary passes.
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
bool isSorted(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr, n))
        cout << "Array is already sorted!" << endl;
    else {
        bubbleSort(arr, n);
        cout << "Sorted array: ";
        printArray(arr, n);
    }
}


// If no swaps are required, we detect sorted condition early and avoid unnecessary computation.