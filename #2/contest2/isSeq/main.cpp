#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; scanf("%d", &n);
    for (int testCase = 0; testCase < n; testCase++) {
        string com; cin >> com;
        int length = com.size(),m;

        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            string comp; cin >> comp;
            int leng = comp.size(), countt = 0, o = 0;
            for (auto E : comp) {
                for (; o < length; o++) {
                    if (E == com[o]) {
                        countt++;
                        o++;
                        break;
                    }
                }
            }
            if (countt == leng) printf("Yes\n");
            else printf("No\n");
        }
    }

}
