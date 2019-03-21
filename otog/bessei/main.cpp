#include <bits/stdc++.h>

using namespace std;

int charToInt(char c) {
    if (c >= 'a' && c <= 'z') return c - 'a'; //Lower Case
    else return c - 'A' + 26; //Upper Case
}

char intToChar(int i) {
    if (i <= 25) return char('a' + i); //Lower Case
    else return char('A' + (i - 26)); //Upper Case
}

int g[52][52];
int ans_min = 0xFFFFFF, ans;

int main()
{
    int p;
    cin >> p;

    for (int i = 0; i < 52; ++i) for (int o = 0; o < 52; ++o) g[i][o] = 0xFFFFFF;

    //Create Floyd's Graph
    for (int i = 0; i < p; ++i) {
        char a, b; int x;
        cin >> a >> b; scanf("%d", &x);
        int aa = charToInt(a);
        int bb = charToInt(b);
        if (x < g[aa][bb]) {
            g[aa][bb] = x;
            g[bb][aa] = x;
        }
    }

    for (int i = 0; i < 52; ++i) g[i][i] = 0;

    for (int p = 0; p < 52; ++p)
        for (int i = 0; i < 52; ++i)
            for (int o = 0; o < 52; ++o)
                if (g[i][p] + g[o][p] < g[i][o])
                    g[i][o] = g[i][p] + g[o][p];

    for (int i = 26; i < 51; ++i) {
        if (g[i][51] < ans_min) {
            ans_min = g[i][51];
            ans = i;
        }
    }

    cout << intToChar(ans) << " " << ans_min << "\n";

    return 0;
}
