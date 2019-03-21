#include <bits/stdc++.h>

using namespace std;

int node;
int adja[100][100] = {0};
int ans[100][3] = {0};
int loc = 0;

void edgeMatrix() {
    for (int i = 0; i < node; i++) {
        for (int o = 0; o < node; o++) {
            if (adja[i][o] != 0) {
                ans[loc][0] = i;
                ans[loc][1] = o;
                ans[loc][2] = adja[i][o];
                loc++;
            }
        }
    }
}

int main() {
    scanf("%d", &node);
    for (int i = 0; i < node; i++) {
        for (int o = 0; o < node; o++) {
            int in; scanf("%d", &in);
            adja[i][o] = in;
        }
    }
    edgeMatrix();
    for (int i = 0; i < loc; i++) {
        printf("%d %d %d\n", ans[i][0], ans[i][1], ans[i][2]);
    }
}
