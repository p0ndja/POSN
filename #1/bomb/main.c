#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount;
    scanf("%d", &amount);
    int x[amount];
    int y[amount];
    int z[amount];

    for (int i = 0; i < amount; i++) {
        scanf("%d %d", &x[i], &y[i]);
        z[i] = 0;
    }

    for (int i = 0; i < amount; i++) {
        for (int o = 0; o < amount; o++) {
            if (x[o] < x[i] && y[o] < y[i]) {
                z[o] = 1;
            }
        }
    }
    printf("\n");

    for (int i = 0; i < amount; i++) {
        if (z[i] == 0) {
            printf("%d %d\n", x[i], y[i]);
        }
    }
}
