// Find minimum after every push in the stack

#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<int> s, minS;
public:
    void push(int x) {
        s.push(x);
        if(minS.empty() || x <= minS.top()) minS.push(x);
    }
    void pop() {
        if(s.top() == minS.top()) minS.pop();
        s.pop();
    }
    int getMin() { return minS.top(); }
};

int main() {
    MinStack ms;
    vector<int> arr = {3, 7, 2, 9, 1};
    for(int x : arr) {
        ms.push(x);
        cout << "Pushed " << x << ", Min = " << ms.getMin() << endl;
    }
}
