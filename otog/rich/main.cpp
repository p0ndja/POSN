#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);

    set<int> x[n];
    int bonus[n];

    for (int i = 0; i < n-1; i++) {
        int a,b; scanf("%d %d", &a,&b);
        x[a].insert(b);
    }

    set<int>::iterator it;

    for (int i = 0; i < n; i++) {
        for (it = x[i].begin(); it != x[i].end(); it++)
            cout << it << " ";
        printf("\n");
    }
}
