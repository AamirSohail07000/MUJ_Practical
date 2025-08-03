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


// Note:
// The sliding window technique is used to find the maximum sum of a subarray of size k in O(n) time. First, we calculate the sum of the first k elements as our initial window. Then, instead of recalculating the sum for each new window, we slide the window one element at a time: subtract the element that leaves the window and add the new element that enters. This way, we efficiently update the sum for each window, keeping track of the maximum. For example, in {2,1,5,1,3,2} with k=3, the maximum sum subarray is {5,1,3} with sum 9.