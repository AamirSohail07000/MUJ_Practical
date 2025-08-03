// Check if Any Subarray of Size K Has Sum ≥ X

#include <iostream>
#include <vector>
using namespace std;

bool hasSubarraySumAtLeastX(vector<int>& arr, int k, int X) {
    int n = arr.size();
    if (n < k) return false;

    int windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    if (windowSum >= X) return true;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum >= X) return true;
    }

    return false;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3, X = 10;
    if (hasSubarraySumAtLeastX(arr, k, X))
        cout << "Yes, a subarray exists with sum >= " << X << endl;
    else
        cout << "No subarray found with sum >= " << X << endl;
    return 0;
}
