#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    char data[x][y];
    for (int i = 0; i < x; i++) {
        for (int o = 0; o < y; o++) {
            scanf("%c", &data[i][o]);
        }
    }

    for (int i = 0; i < x; i++) {
        for (int o = 0; o < y; o++) {
            int count = 0;
            if (i - 1 >= 0) {
                if (data[i-1][o] == '.')
                    count++;
            }
            if (i + 1 < x) {
                if (data[i+1][o] == '.')
                    count++;
            }
            if (o - 1 >= 0) {
                if (data[i][o-1] == '.')
                    count++;
            }
            if (o + 1 < y) {
                if (data[i][o+1] == '.')
                    count++;
            }

            if (count > 2) {
                data[i][o] = '.';
            }
        }
    }

        for (int i = 0; i < x; i++) {
        for (int o = 0; o < y; o++) {
                printf("%c", data[i][o]);
        }
        printf("\n");
        }
}
