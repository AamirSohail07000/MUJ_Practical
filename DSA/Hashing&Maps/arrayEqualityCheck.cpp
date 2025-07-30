// Check if Two Arrays are Equal or Not (Using Hashing)

//  Concept
// Two arrays are equal if they contain the same elements with the same frequency, order does not matter.

// Use a hash map to count frequencies from both arrays and compare.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool areEqual(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) return false;

    unordered_map<int, int> freq;

    // Count elements from arr1
    for (int x : arr1) {
        freq[x]++;
    }

    // Subtract count using arr2
    for (int x : arr2) {
        freq[x]--;
        if (freq[x] < 0) return false; // more occurrences in arr2
    }

    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {4, 3, 2, 1};

    if (areEqual(arr1, arr2))
        cout << "Arrays are equal." << endl;
    else
        cout << "Arrays are not equal." << endl;

    return 0;
}
