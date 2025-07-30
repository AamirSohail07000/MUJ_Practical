// Concept
// Union: All unique elements present in both arrays.
// Intersection: Elements common to both arrays.

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 4, 5, 6};

    unordered_set<int> unionSet;
    unordered_set<int> interSet;

    // Add elements of arr1 to unionSet
    for (int x : arr1) unionSet.insert(x);

    // Add arr2 elements; check for intersection
    for (int x : arr2) {
        if (unionSet.find(x) != unionSet.end())
            interSet.insert(x);  // common element
        unionSet.insert(x);      // ensure all elements in union
    }

    cout << "Union: ";
    for (int x : unionSet) cout << x << " ";
    cout << "\nIntersection: ";
    for (int x : interSet) cout << x << " ";
    return 0;
}
