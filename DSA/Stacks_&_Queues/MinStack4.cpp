// Use Min Stack to check stock span problem minimums

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
    vector<int> stock = {100, 80, 120, 70, 60, 75, 85};
    for(int price : stock) {
        ms.push(price);
        cout << "Inserted: " << price << ", Current Min Price = " << ms.getMin() << endl;
    }
}
