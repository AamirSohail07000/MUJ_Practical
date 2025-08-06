// Longest Substring Without Repeating Characters (Ignore Spaces)

#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

string longestSubstringNoRepeatIgnoreSpace(string s) {
    // Step 1: Remove all spaces
    string filtered = "";
    for (char c : s) {
        if (c != ' ') filtered += c;
    }

    // Step 2: Normal sliding window algorithm
    unordered_set<char> seen;
    int left = 0, maxLen = 0, start = 0;

    for (int right = 0; right < filtered.size(); right++) {
        while (seen.find(filtered[right]) != seen.end()) {
            seen.erase(filtered[left]);
            left++;
        }

        seen.insert(filtered[right]);

        if (right - left + 1 > maxLen) {
            maxLen = right - left + 1;
            start = left;
        }
    }
    return filtered.substr(start, maxLen);
}

int main() {
    string s = "coding is fun";
    cout << "Longest substring (ignoring spaces) = " 
         << longestSubstringNoRepeatIgnoreSpace(s) << endl;
    return 0;
}
