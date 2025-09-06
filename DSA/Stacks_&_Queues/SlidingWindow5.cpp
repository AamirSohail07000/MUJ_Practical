// For nums = [1, 2, 3, 4, 5, 6] and k = 3, return maximums.
#include <bits/stdc++.h>
using namespace std;

vector<int> slidingWindowMax(vector<int>& nums, int k) {
    deque<int> dq;
    vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        // Remove elements outside window
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
        
        // Remove smaller elements from back
        while (!dq.empty() && nums[dq.back()] < nums[i])
            dq.pop_back();
        
        dq.push_back(i);
        
        // Store max for current window
        if (i >= k - 1)
            result.push_back(nums[dq.front()]);
    }
    return result;
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 3;
    vector<int> ans = slidingWindowMax(nums, k);
    for (int x : ans) cout << x << " ";
    return 0;
}
// Output: 3 4 5 6
