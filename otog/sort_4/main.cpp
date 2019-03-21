#include <bits/stdc++.h>

using namespace std;

struct letters {
    string s;
    int count[27];
};

bool compareFunction(letters a, letters b) {
    for (int i = 1; i < 27; i++)
        if (a.count[i] != b.count[i])
            return a.count[i] > b.count[i]; //Sort
    return a.s < b.s; //
}

letters l[10000];

int main()
{
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> l[i].s;
        for (int o = 0; o < l[i].s.length(); o++)
            if (l[i].s.at(o) >= 97 && l[i].s.at(o) <= 122) //Count Only Lower Case
                l[i].count[l[i].s.at(o) - 96]++;

    }
    sort(l, l + n, compareFunction);
    for (int i = 0; i < n; i++) printf("%s\n", l[i].s.c_str());
}
