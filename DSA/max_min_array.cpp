// Program Name: max_min_array.cpp
// Purpose: To find the maximum and minimum elements in a given array

#include <iostream> // Required for input/output
using namespace std;

int main() {
    // Declare and initialize the array
    int numbers[] = {7, 2, 9, 1, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate size of the array

    // Initialize max and min with the first element
    int maxElement = numbers[0];
    int minElement = numbers[0];

    // Loop through the array to find max and min
    for (int i = 1; i < size; i++) {
        if (numbers[i] > maxElement) {
            maxElement = numbers[i]; // Update max if current is greater
        }
        if (numbers[i] < minElement) {
            minElement = numbers[i]; // Update min if current is smaller
        }
    }

    // Display the results
    cout << "Maximum element: "<<maxElement << endl;
    cout << "Minimum element: "<<minElement << endl;

    return 0; // End of program
}
