// Longest Substring Without Repeating Characters
// The Longest Substring Without Repeating Characters problem asks us to find the length of the longest substring (continuous sequence) in a string where all characters are unique.

// 💡 Key Idea
// We use a variable sliding window because the window size changes depending on duplicates:

// Start with two pointers: left and right at 0.

// Expand the window (right++) until a duplicate character is found.

// If a duplicate is found, shrink the window from the left (left++) until the duplicate is removed.

// Keep track of the maximum window size seen so far.

// This works in O(n) time because each character is visited at most twice (once by right pointer, once by left).

// Find the Actual Longest Substring Without Repeating Characters
// 👉 Not just length, but also print the substring.

#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

string longestUniqueSubstring(string s) {
    unordered_set<char> seen;
    int left = 0, maxLen = 0, start = 0;

    for (int right = 0; right < s.size(); right++) {
        while (seen.find(s[right]) != seen.end()) {
            seen.erase(s[left]);
            left++;
        }
        seen.insert(s[right]);

        if (right - left + 1 > maxLen) {
            maxLen = right - left + 1;
            start = left; // store start index of max substring
        }
    }
    return s.substr(start, maxLen);
}

int main() {
    string s = "pwwkew";
    cout << "Longest substring = " << longestUniqueSubstring(s) << endl;
    return 0;
}
