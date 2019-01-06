#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,point;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &point);

    int data[x][y];

    for (int i = 0; i < x; i++) {
        for (int o = 0; o < y; o++) {
            data[i][o] = 0;
        }
    }

    int count = 1;
    for (int i = 0; i < point; i++) {
        int xp,yp;
        scanf("%d", &xp);
        scanf("%d", &yp);
        data[xp-1][yp-1] = count;
        count++;
    }

    for (int i = 0; i < x; i++) {
        for (int o = 0; o < y; o++) {
            printf("%d", data[i][o]);
        }
        printf("\n");
    }
}
