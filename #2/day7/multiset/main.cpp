#include <bits/stdc++.h>

using namespace std;
struct Data{
    int weight;
    int cost;
    Data(int w, int c) {
        weight = w;
        cost = c;
    }
};
int main()
{
    multiset<int, greater<int>> score;
    score.insert(59);
    score.insert(30);
    score.insert(30);
    score.insert(40);
    score.insert(50);
    score.insert(40);

    multiset<string, less_equal<string>> words;
    multiset<pair<string, int>> st;
    multiset<pair<string, Data>> logis;
}
