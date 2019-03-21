#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int,greater<int>> marks = {10,10,20}; //Set can compare by using >,<,==,!=
    marks.insert(40);
    marks.insert(30);
    marks.insert(50);
    marks.insert(60);
    set<int>::iterator low, high;
    cout << "Count: " << marks.size() << endl;
    for (auto e : marks)
        cout << e << ends;
    low = marks.lower_bound(20);
    high = marks.upper_bound(40);
    cout << "At the lower bound: " << *low << endl;
    cout << "At the higher bound: " << *high << endl;

    while(low != high && low != marks.end()) {
        cout << " -> " << *low; //20 - 40
        low++;
    }

    marks.erase(10);
    printf("\n");

    int num = 30;
    set<int>::iterator key = marks.find(num);
    if (key != marks.end()) {
        cout << "FOUND " << *key << endl;
    } else {
        cout << "NOT FOUND " << num << endl;
    }

    return 0;
}
