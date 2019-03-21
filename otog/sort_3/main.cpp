#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; scanf("%d", &n);
    string data[n];
    for (int i = 0; i < n; i++) cin >> data[i];
    sort(data, data+n);
    for (int i = 0; i < n; i++)
    printf("%s\n", data[i].c_str());
}
