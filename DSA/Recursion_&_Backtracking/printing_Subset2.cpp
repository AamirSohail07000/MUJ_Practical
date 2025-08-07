// Print subsets that are palindromes

#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l++] != s[r--]) return false;
    }
    return true;
}

void printPalindromicSubsets(string input, string output, int index) {
    if (index == input.length()) {
        if (!output.empty() && isPalindrome(output)) {
            cout << output << endl;
        }
        return;
    }

    printPalindromicSubsets(input, output, index + 1);
    printPalindromicSubsets(input, output + input[index], index + 1);
}

int main() {
    string input = "aab";
    printPalindromicSubsets(input, "", 0);
    return 0;
}
