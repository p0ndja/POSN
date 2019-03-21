#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int data[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &data[i]);

    for(int i = 0; i < m; i++) {
        int a,b; scanf("%d %d", &a, &b);
        a--;
        b--;
        while(1) {
            if (a >= b) {
                printf("Yes\n");
                break;
            } else {
                if (data[a] <= data[a + 1]) {
                    a++;
                } else if (data[b] <= data[b - 1]) {
                    b--;
                } else {
                    printf("No\n");
                    break;
                }
            }
        }
    }
}
