// Next Greater Element in Circular Array
// Problem:
// In a circular array, the last element is connected to the first. Find the next greater element for each element.

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterCircular(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n, -1);
    stack<int> st;

    for (int i = 2 * n - 1; i >= 0; i--) {
        int num = arr[i % n];
        while (!st.empty() && st.top() <= num)
            st.pop();
        if (i < n && !st.empty())
            res[i] = st.top();
        st.push(num);
    }
    return res;
}

int main() {
    vector<int> arr = {1, 2, 1};
    vector<int> ans = nextGreaterCircular(arr);

    cout << "Next Greater Circular: ";
    for (int x : ans) cout << x << " ";
    return 0;
}
