#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,size;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &size);

    if (x < 2 || y < 2 || x > 1000 || y > 1000 || size > x || size > y) {
        return 0;
    }

    int data[x][y];
    for (int i = 0; i < x; i++) {
        for (int o = 0; o < y; o++) {
            scanf("%d", &data[i][o]);
            if (data[i][o] > 2000) {
                return 0;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < x - size + 1; i++) {
        for (int j = 0; j < y - size + 1; j++) {
            int sum = 0;

            for (int m = 0; m < size; m++) {
                for (int n = 0; n < size; n++) {
                    sum += data[i+m][j+n];
                }
            }

            if (sum > max) max = sum;
        }
    }
    printf("%d", max);
    return 0;
}
