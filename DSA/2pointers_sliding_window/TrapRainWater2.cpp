// Print Amount of Water Above Each Bar

#include <iostream>
#include <vector>
using namespace std;

void waterAboveEachBar(vector<int>& height) {
    int n = height.size();
    vector<int> leftMax(n), rightMax(n);

    leftMax[0] = height[0];
    for (int i = 1; i < n; i++)
        leftMax[i] = max(height[i], leftMax[i - 1]);

    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
        rightMax[i] = max(height[i], rightMax[i + 1]);

    cout << "Water above each bar: ";
    for (int i = 0; i < n; i++) {
        int water = min(leftMax[i], rightMax[i]) - height[i];
        cout << max(0, water) << " ";
    }
    cout << endl;
}

int main() {
    vector<int> height = {3,0,2,0,4};
    waterAboveEachBar(height);
    return 0;
}
