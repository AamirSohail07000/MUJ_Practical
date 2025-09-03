// Implement Min Stack without using extra stack (store pairs or modified values)

#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<long long> s;
    long long minVal;
public:
    void push(int x) {
        if(s.empty()) {
            s.push(x);
            minVal = x;
        } else if(x >= minVal) {
            s.push(x);
        } else {
            s.push(2LL*x - minVal);
            minVal = x;
        }
    }
    void pop() {
        if(s.top() < minVal) {
            minVal = 2*minVal - s.top();
        }
        s.pop();
    }
    int top() {
        if(s.top() < minVal) return minVal;
        return s.top();
    }
    int getMin() { return minVal; }
};

int main() {
    MinStack ms;
    ms.push(10);
    ms.push(5);
    ms.push(20);
    cout << "Min: " << ms.getMin() << endl; // 5
    ms.pop();
    cout << "Min: " << ms.getMin() << endl; // 5
    ms.pop();
    cout << "Min: " << ms.getMin() << endl; // 10
}
