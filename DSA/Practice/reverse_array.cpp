// Reverse an Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Swapping elements from both ends using two-pointer method
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

// Concept:
// We use two indices (i from start and n-1-i from end) and swap until the middle is reached.

// 🧠 Step-by-step Explanation:
// 🔹 for (int i = 0; i < n / 2; i++)
// i starts from the beginning (i = 0) and runs only till the middle of the array (n/2).

// Why only till halfway? Because you are swapping two elements in each iteration (start ↔ end), so no need to go further.

// 🔹 int temp = arr[i];
// Store the current front element in a temporary variable temp (you’re about to overwrite it).

// 🔹 arr[i] = arr[n - 1 - i];
// Replace the front element (arr[i]) with the corresponding back element.

// n - 1 - i gives you the index from the end of the array.

// 🔹 arr[n - 1 - i] = temp;
// Now set the back element to the original front element which was saved in temp.