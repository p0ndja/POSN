#include <stdio.h>
#define checkMax(a,b) a > b ? a : b

int main () {
    int x,y; scanf("%d %d", &x, &y);
    int fruit[251][251], best[251][251];
    for (int i = 0; i < x; i++)
        for (int o = 0; o < y; o++)
            scanf("%d", &fruit[i][o]);

    best[0][0] = fruit[0][0]; //The first one didn't have any compare.

    for (int o = 1; o < y; o++) { //Go Right
        best[0][o] = best[0][o - 1] + fruit[0][o];
        //printf("[0][%d]=%d ", o, best[0][o]);
    }
    for (int i = 1; i < x; i++) { //Go Down
        best[i][0] = best[i - 1][0] + fruit[i][0];
        //printf("[%d][0]=%d ", i, best[i][0]);
    }

    for (int i = 1; i < x; i++) {
        for (int o = 1; o < y; o++) {
            best[i][o] = fruit[i][o] + (checkMax(best[i][o - 1], best[i - 1][o]));
            //printf(".[%d][%d]=%d ", i,o, best[i][o]);
        }
    }
    printf("%d", best[x-1][y-1]);
    return 0;
}
