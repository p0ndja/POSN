#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Insert Row: ");
    scanf("%d", &x);
    printf("Insert Column: ");
    scanf("%d", &y);
    int a[x][y];
    for (int i = 0; i < x; i++) {
        for (int m = 0; m < y; m++) {
            scanf("%d", &a[i][m]);
        }
    }
    printf("\n");
    int sum = 0;
    for (int i = 0; i < x; i++) {
        for (int m = 0; m < y; m++) {
            printf("%d ", a[i][m]);
            sum += a[i][m];
        }
        printf("\n");
    }
    printf("\nSUM = %d", sum);
}
