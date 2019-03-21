#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))

int min_x = 99, max_x = 0,
    min_y = 99, max_y = 0;

char world[12][12], new_world[12][12];

void update(int x, int y) {
    max_x = max(x, max_x);
    max_y = max(y, max_y);
    min_x = min(x, min_x);
    min_y = min(y, min_y);
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    for (int i = 0; i<r; i++) {
        scanf("%s", world[i]);
    }

    const int dx[] = {0, 0, -1, 1},
              dy[] = {1, -1, 0, 0};

    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++) {
            if (world[y][x] == '.') {
                new_world[y][x] = '.';
                continue;
            }
            int cnt = 0;
            for (int i = 0; i < 4; i++) {
                if (world[y+dy[i]][x+dx[i]] == '.')
                    cnt ++;
            }
            if (cnt >= 3)
                new_world[y][x] = '.';
            else {
                update(x, y);
                new_world[y][x] = 'X';
            }
        }
    }
    for (int y = min_y; y <= max_y; y++) {
        for (int x = min_x; x <= max_x; x++)
            printf("%c", new_world[y][x]);
        printf("\n");
    }
    return 0;
}
