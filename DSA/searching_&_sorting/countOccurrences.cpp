// This is a Linear Search approach. It checks each element of the array one by one.
int countOccurrences(int arr[], int n, int key) {
    int count = 0; // counter to store how many times the key is found
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) // if element matches key
            count++; // increment the counter
    }
    return count; // return total count
}

// Example-
int arr[] = {1, 2, 3, 2, 4, 2};
int n = 6;
int key = 2;
int result = countOccurrences(arr, n, key); // result = 3

// Also uses Linear Search but keeps updating the index whenever it finds a match. After the loop, the index holds the last occurrence.

int lastOccurrence(int arr[], int n, int key) {
    int index = -1; // store last index where key is found; -1 means not found
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            index = i; // update index every time key is found
    }
    return index; // return final index
}

// Example-
// int arr[] = {5, 3, 7, 3, 8, 3};
// int n = 6;
// int key = 3;
// int result = lastOccurrence(arr, n, key); // result = 5 (last '3' at index 5)
