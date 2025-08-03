// Fixed Sliding Window problem
// Maximum Sum Subarray of Size K
// Brute Force: For each subarray of size K, calculate the sum → O(n·k).

// Sliding Window:

// Compute the sum of the first K elements.

// Slide the window one step at a time:

// Subtract the element going out of the window.

// Add the new element coming into the window.

// Update the maximum.

// Time Complexity: O(n)

// Space Complexity: O(1)

// Find Maximum Sum Subarray of Size K

#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) return -1; // window size too large

    int windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k]; // slide window
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Max sum of subarray of size " << k << " = " 
         << maxSumSubarray(arr, k) << endl;
    return 0;
}
