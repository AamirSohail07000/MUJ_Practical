#include <iostream>
using namespace std;

double squareRootPrecision(int x, int precision = 5) {
    int low = 0, high = x;
    double ans = 0.0;

    // Binary search for integer part
    while (low <= high) {
        int mid = (low + high) / 2;
        if ((long long)mid * mid <= x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Binary search for decimal part
    double increment = 0.1;
    for (int i = 0; i < precision; i++) {
        while (ans * ans <= x) {
            ans += increment;
        }
        ans -= increment;
        increment /= 10;
    }

    return ans;
}

int main() {
    int x = 28;
    cout << "Square root of " << x << " is approximately: " << squareRootPrecision(x) << endl;
    return 0;
}


// ✅ When to Use What?
// Use Integer Version:

// If you only care about floor or index (e.g., binary search thresholds, square root check)

// Fast and sufficient for logic or combinatorics problems.

// Use Floating Point Version:

// If decimal precision matters (like physics calculations, root solving, geometry)

// Adjustable precision based on need.