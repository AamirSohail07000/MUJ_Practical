// Longest Subarray with 0 Sum
// 📘 Concept
// Maintain a running sum of elements.

// Store the index of each sum in a hash map.

// If the same sum occurs again, the subarray between them has sum 0.

// Keep track of the longest length.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestZeroSumSubarray(vector<int>& arr) {
    unordered_map<int, int> prefixSum;
    int sum = 0, maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum == 0) maxLen = i + 1;  // from start
        if (prefixSum.find(sum) != prefixSum.end()) {
            maxLen = max(maxLen, i - prefixSum[sum]);
        } else {
            prefixSum[sum] = i;  // store first index of this sum
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    cout << "Longest subarray with 0 sum length: " 
         << longestZeroSumSubarray(arr) << endl;
    return 0;
}
