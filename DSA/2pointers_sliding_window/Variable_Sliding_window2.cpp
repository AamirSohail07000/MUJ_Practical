// Longest Substring With At Most K Distinct Characters

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longestSubstringKDistinct(string s, int K) {
    unordered_map<char, int> freq;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        freq[s[right]]++;

        // Shrink window if more than K distinct characters
        while (freq.size() > K) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) freq.erase(s[left]);
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    string s = "eceba";
    int K = 2;
    cout << "Length = " << longestSubstringKDistinct(s, K) << endl;
    return 0;
}
