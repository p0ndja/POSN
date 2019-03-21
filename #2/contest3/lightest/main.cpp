#include <bits/stdc++.h>

using namespace std;

/*
struct b {
    int weight;
    int value;
};

b data[200000];

bool compare(b x, b y) {
    return x.weight < y.weight;
}
*/

/*
There're 2 way for this solutions:
-> Set (for low number solution)
-> Queue (for big number solution)

Test Case:
3 4
T 10 20
T 5 10
P
T 7 30
P
P
P
*/

int main()
{
    ios::sync_with_stdio(0);
    int m,n; scanf("%d %d", &m, &n);

    //multiset<pair<int,int>> a;

    //int loc = 0; int index = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> a; //Greater for low -> high

    for (int i = 0; i < m+n; i++) {
        char command[5]; scanf("%s", &command);
        int bbb = strcmp(command,"T");
        if (bbb == 0) {
            int weight, value;
            scanf("%d %d", &weight, &value);
            a.push(make_pair(weight, value));
            //data[loc].weight = weight; data[loc].value = value; loc++; sort(data, data + loc, compare);
        } else {
            if (a.size() > 0 || !a.empty()) {
                printf("%d", a.top().second);
                a.pop();
            } else {
                printf("0\n");
            //printf("%d\n", data[index].value); index++;
            }
        }
    }
}
