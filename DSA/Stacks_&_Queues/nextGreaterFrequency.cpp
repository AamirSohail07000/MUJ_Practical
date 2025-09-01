// Next Greater Frequency Element

// Problem:
// Given an array, find the next element to the right having greater frequency. If no such element exists, return -1.

#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> nextGreaterFrequency(vector<int>& arr) {
    int n = arr.size();
    unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;

    vector<int> res(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && freq[st.top()] <= freq[arr[i]])
            st.pop();
        if (!st.empty())
            res[i] = st.top();
        st.push(arr[i]);
    }
    return res;
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 4, 2, 1};
    vector<int> ans = nextGreaterFrequency(arr);

    cout << "Next Greater Frequency: ";
    for (int x : ans) cout << x << " ";
    return 0;
}
