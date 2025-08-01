// Print all pairs with sum = 12.

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void allPairsWithSumUnsorted(vector<int>& arr, int target) {
    unordered_set<int> seen;
    bool found = false;

    for (int num : arr) {
        int needed = target - num;
        if (seen.find(needed) != seen.end()) {
            cout << num << " + " << needed << " = " << target << endl;
            found = true;
        }
        seen.insert(num);
    }

    if (!found) cout << "No pairs found." << endl;
}

int main() {
    vector<int> arr = {5, 7, 1, 2, 8, 4, 3};
    int target = 12;
    allPairsWithSumUnsorted(arr, target);
    return 0;
}
