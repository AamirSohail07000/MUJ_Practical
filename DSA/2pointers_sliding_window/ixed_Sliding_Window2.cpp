// Print the Subarray with Maximum Sum

#include <iostream>
#include <vector>
using namespace std;

void printMaxSumSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) {
        cout << "Window size too large!" << endl;
        return;
    }

    int windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum, startIndex = 0;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
            startIndex = i - k + 1;
        }
    }

    cout << "Max sum = " << maxSum << ", Subarray: ";
    for (int i = startIndex; i < startIndex + k; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    printMaxSumSubarray(arr, k);
    return 0;
}
