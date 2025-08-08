// Count the number of subsets of "abcd"

#include <iostream>
using namespace std;

int countSubsets(string input, int index) {
    if (index == input.length()) {
        return 1;
    }

    // Count of subsets by excluding and including current char
    int exclude = countSubsets(input, index + 1);
    int include = countSubsets(input, index + 1);

    return exclude + include;
}

int main() {
    string input = "abcd";
    cout << "Total subsets = " << countSubsets(input, 0) << endl;
    return 0;
}
