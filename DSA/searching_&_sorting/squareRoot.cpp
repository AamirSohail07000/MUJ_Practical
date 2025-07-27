// Q-Find Square Root Using Binary Search
// Given a number x, find its square root (only integer part) using binary search. Don’t use built-in functions like sqrt().

// 🔹 Concept:
// Square root of x lies between 1 and x

// Use binary search to find the largest number ans such that ans*ans <= x

#include <iostream>
using namespace std;

int squareRoot(int x) {
    if (x == 0 || x == 1)
        return x;

    int low = 1, high = x, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // To avoid overflow, use long long
        long long square = 1LL * mid * mid;

        if (square == x)
            return mid;
        else if (square < x) {
            ans = mid;      // store the best possible answer
            low = mid + 1;  // try for a bigger value
        } else {
            high = mid - 1; // try for a smaller value
        }
    }

    return ans;
}

int main() {
    int x = 28;
    cout << "Square root of " << x << " is " << squareRoot(x);
    return 0;
}
