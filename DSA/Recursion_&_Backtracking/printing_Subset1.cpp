// Printing All Subsets of a String
// 📘 Concept:
// This is a classic recursion/backtracking problem.

// You need to generate all possible combinations (subsets) of a given string.

// At each character, you have two choices:

// Include the character in the current subset.

// Exclude the character.

// Print all subsets of "abc"

#include <iostream>
using namespace std;

void printSubsets(string input, string output, int index) {
    if (index == input.length()) {
        cout << "\"" << output << "\"" << endl;
        return;
    }

    // Exclude current character
    printSubsets(input, output, index + 1);

    // Include current character
    printSubsets(input, output + input[index], index + 1);
}

int main() {
    string input = "abc";
    printSubsets(input, "", 0);
    return 0;
}
