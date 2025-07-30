// Given an array, find the first element that does not repeat.

// 🔹 Example
// Input: {4, 5, 1, 2, 1, 4}
// Output: 5

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {4, 5, 1, 2, 1, 4};
    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int num : arr) {
        freq[num]++;
    }

    // Find the first element with frequency = 1
    for (int num : arr) {
        if (freq[num] == 1) {
            cout << "First non-repeating element: " << num << endl;
            return 0;
        }
    }

    cout << "No non-repeating element found." << endl;
    return 0;
}
