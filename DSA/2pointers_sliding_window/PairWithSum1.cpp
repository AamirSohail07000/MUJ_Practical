// Pair with Given Sum in a Sorted Array
// 📘 Concept
// Since the array is sorted:

// Start with two pointers → one at the beginning (left) and one at the end (right).

// If the sum is too small → move left forward.

// If the sum is too big → move right backward.

// Runs in O(n).

// Q-Find if a pair exists with sum = 10 in a sorted array.

#include <iostream>
#include <vector>
using namespace std;

bool pairWithSumSorted(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Pair found: " << arr[left] << " and " << arr[right] << endl;
            return true;
        } else if (sum < target) {
            left++;  // need a bigger sum
        } else {
            right--; // need a smaller sum
        }
    }
    cout << "No pair found." << endl;
    return false;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 7, 10};
    int target = 10;
    int target2 = 9;
    pairWithSumSorted(arr, target);
    pairWithSumSorted(arr, target2);
    return 0;
}
