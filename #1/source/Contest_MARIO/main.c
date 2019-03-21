#include <stdio.h>
#include <limits.h>

#define min(x,y) ((x)<(y)?(x):(y))

int board[15][15],n, m;

int globle_min = INT_MAX;

void search(int x, int y, int coin) {
    static const int dx[] = {-1, 0, 1};
    int now_coin = coin+board[y][x];
    if (y == n-1) {
        globle_min = min(globle_min, now_coin);
        return;
    }

    for (int i = 0; i < 3; i++) {
        int next_x = x+dx[i],
            next_y = y+1;
        if (next_x >= 0 && next_x < m && next_y < n)
            search(next_x, next_y, now_coin);
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &board[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        search(i, 0, 0);
    }
    printf("%d", globle_min);
    return 0;
}
