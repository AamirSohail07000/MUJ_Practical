// Given a string, count how many times each character appears.
// Input- "hello"

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str = "hello";
    unordered_map<char, int> freq;  // map to store char → count

    // Count frequency
    for (char ch : str) {
        freq[ch]++;
    }

    // Print result
    cout << "Character Frequencies:\n";
    for (auto pair : freq) {
        cout << pair.first << " : " << pair.second << endl;
    }
    return 0;
}

// Concept
// Each character is stored as a key in unordered_map.

// The frequency is stored as the value.

// Lookup and insertion are O(1) on average.