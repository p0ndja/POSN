#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
    cout << q.front() << endl;
    q.pop();
    }

    deque<int> d;
    stack<int> s;

    priority_queue<int> p;
    p.push(5);
    p.push(4);
    p.push(6);
    while(!p.empty()) {
    cout << p.top() << endl;
    p.pop();
    }
    return 0;
}
