// Given a sorted array (can have duplicate elements), find the first and last index of a given number using binary search.

#include <iostream>
using namespace std;

// Function to find the first occurrence of key
int firstOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            result = mid;       // Possible answer found
            high = mid - 1;     // Move left to find earlier occurrence
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return result;
}

// Function to find the last occurrence of key
int lastOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            result = mid;       // Possible answer found
            low = mid + 1;      // Move right to find later occurrence
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    if (first == -1)
        cout << "Key " << key << " not found in the array." << endl;
    else {
        cout << "First Occurrence of " << key << " is at index: " << first << endl;
        cout << "Last Occurrence of " << key << " is at index: " << last << endl;
    }

    return 0;
}

// Concept Recap:
// Use Binary Search to optimize the search in sorted arrays.

// For first occurrence, go left after finding a match.

// For last occurrence, go right after finding a match.