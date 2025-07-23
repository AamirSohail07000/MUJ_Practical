// Find the Second Largest Element

#include <iostream>
using namespace std;

int main() {
  // One-pass traversal with two variables: largest and second (without sorting)
    int arr[] = {10, 5, 20, 8, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] != largest && (second == -1 || arr[i] > second)) {
            second = arr[i];
        }
    }

    if (second != -1)
        cout << "Second Largest: " << second << endl;
    else
        cout << "No second largest element found." << endl;

    return 0;
}


// Concept:
// We maintain two variables: largest and second. We update them in a single pass while handling duplicates.