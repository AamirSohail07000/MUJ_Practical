// Remove Duplicates from a Sorted Array

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int j = 0; // index of the next unique element

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1; // length of updated array
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}


// Concept:
// This uses the two-pointer technique. One pointer keeps track of unique elements. Since the array is sorted, duplicates are adjacent.

//  Example Dry Run
// arr[] = {1, 2, 2, 3, 3, 4}
// n = 6
// i	arr[i]	arr[j]	Action	            Updated arr	      j
// 1	2	      1	      Not equal → copy	  {1,2,2,3,3,4}	    1
// 2	2	      2	      Equal → skip		                      1
// 3	3	      2	      Not equal → copy	  {1,2,3,3,3,4}	    2
// 4	3	      3	      Equal → skip		                      2
// 5	4	      3	      Not equal → copy	  {1,2,3,4,3,4}	    3

// ✅ Final j = 3 → return j + 1 = 4

// Unique values are in arr[0] to arr[3] → {1, 2, 3, 4}