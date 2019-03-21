#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Insert X dimension: ");
    scanf("%d", &x);
    printf("Insert Y dimension: ");
    scanf("%d", &y);
    printf("\n");
    float a[x][y];
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            a[i][j] = i+j+1;
        }
    }

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("%g ", a[i][j]);
        }
        printf("\n");
    }
}
