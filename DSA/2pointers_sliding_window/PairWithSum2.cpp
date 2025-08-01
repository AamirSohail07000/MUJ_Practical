// Find all pairs with sum = 12.



#include <iostream>
#include <vector>
using namespace std;

void allPairsWithSumSorted(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    bool found = false;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << arr[left] << " + " << arr[right] << " = " << target << endl;
            found = true;
            left++;
            right--;
        } else if (sum < target) left++;
        else right--;
    }

    if (!found) cout << "No pairs found." << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 7, 8, 9, 10};
    int target = 12;
    allPairsWithSumSorted(arr, target);
    return 0;
}
