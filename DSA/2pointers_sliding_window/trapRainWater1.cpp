// Concept: Trapping Rain Water
// Imagine an array where each element represents the height of a bar in a histogram.

// When it rains, water gets trapped between these bars.

// Water above any bar depends on the maximum height to the left and right of that bar.

// Formula:
// For each index i,

// arduino
// Copy
// Edit
// water[i] = min(leftMax[i], rightMax[i]) - height[i]
// leftMax[i] → tallest bar on the left (including i).

// rightMax[i] → tallest bar on the right (including i).

// If result is negative, take 0 (no water can be trapped).

// Question 1: Basic — Find Total Water Trapped

#include <iostream>
#include <vector>
using namespace std;

int trapRainWater(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;

    vector<int> leftMax(n), rightMax(n);
    int water = 0;

    // Fill leftMax array
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++)
        leftMax[i] = max(height[i], leftMax[i - 1]);

    // Fill rightMax array
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
        rightMax[i] = max(height[i], rightMax[i + 1]);

    // Calculate water
    for (int i = 0; i < n; i++)
        water += min(leftMax[i], rightMax[i]) - height[i];

    return water;
}

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Total trapped water: " << trapRainWater(height) << endl;
    return 0;
}
