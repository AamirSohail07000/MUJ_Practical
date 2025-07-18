// Program Name: search_element.cpp
// Purpose: Search for the element 5 in an array and return its index

#include <iostream> // Required for input/output operations
using namespace std;

//NOTE: UNCOMMENT THE BELOW LINE for unext test case
#ifndef __CXX_TEST_MAIN__

int main() {
    // Declare and initialize the array
    int numbers[] = {3, 8, 12, 5, 6, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate array size
    int searchElement = 5; // Element to be searched
    int index = -1; // Variable to store index if element is found

    // Loop through the array to search for the element
    for (int i = 0; i < size; i++) {
        if (numbers[i] == searchElement) {
            index = i; // Store the index where element is found
            break;     // Exit loop after finding the element
        }
    }

    // Display the result
    if (index != -1) {
        cout << index << endl;
    } else {
        cout << "Element " << searchElement << " not found in the array." << endl;
    }

    return 0;
}

//NOTE: UNCOMMENT THE BELOW LINE for unext test case
#endif