// Given an array, count how many swaps are performed while sorting it using Bubble Sort.
#include <iostream>
using namespace std;
int countSwaps(int arr[], int n) {
    int swapCount = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapCount++;
            }
        }
    }
    return swapCount;
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int swaps = countSwaps(arr, n);

    cout << "Total swaps: " << swaps << endl;
}

// Explanation:
// Swap counter increases each time two elements are exchanged.