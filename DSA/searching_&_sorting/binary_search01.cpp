// Binary search works only on sorted arrays and divides the search space by half each time.
// Iterative Binary Search

#include <iostream>
using namespace std;

// Iterative Binary Search function
int binarySearchIterative(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // If key is found at mid index
        if (arr[mid] == key)
            return mid;

        // If key is greater, ignore left half
        else if (arr[mid] < key)
            low = mid + 1;

        // If key is smaller, ignore right half
        else
            high = mid - 1;
    }

    // Key was not found in array
    return -1;
}

int main() {
    // Sorted array (required for Binary Search)
    int arr[] = {2, 4, 7, 10, 14, 18, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the number to search: ";
    cin >> key;

    int result = binarySearchIterative(arr, n, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}

