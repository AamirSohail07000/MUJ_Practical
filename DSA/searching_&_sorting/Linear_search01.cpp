// Concept- Linear search checks each element in the array one by one until it finds the target.

// Q-Search for an element in an array

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Element found
    }
    return -1; // Not found
}

int main() {
    int arr[] = {4, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    int index = linearSearch(arr, n, key);
    
    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";
    return 0;
}
