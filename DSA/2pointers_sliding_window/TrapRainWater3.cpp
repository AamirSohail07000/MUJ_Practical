// Optimized Two-Pointer Solution
// 📘 Concept
// Instead of storing leftMax[] and rightMax[], use two pointers with running max from both sides.

// This reduces space from O(n) → O(1).

#include <iostream>
#include <vector>
using namespace std;

int trapRainWaterOptimized(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0, water = 0;

    while (left <= right) {
        if (height[left] <= height[right]) {
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                water += leftMax - height[left];
            left++;
        } else {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                water += rightMax - height[right];
            right--;
        }
    }
    return water;
}

int main() {
    vector<int> height = {4,2,0,3,2,5};
    cout << "Total trapped water (optimized): " 
         << trapRainWaterOptimized(height) << endl;
    return 0;
}
