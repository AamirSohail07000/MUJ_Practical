// Check if a pair exists with sum = 17.

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool pairWithSumUnsorted(vector<int>& arr, int target) {
    unordered_set<int> seen;

    for (int num : arr) {
        int needed = target - num;
        if (seen.find(needed) != seen.end()) {
            cout << "Pair found: " << num << " and " << needed << endl;
            return true;
        }
        seen.insert(num);
    }
    cout << "No pair found." << endl;
    return false;
}

int main() {
    vector<int> arr = {10, 15, 3, 7};
    int target = 17;
    pairWithSumUnsorted(arr, target);
    return 0;
}
