#include <stdio.h>
#include <stdlib.h>

int det(int x, int y) {
}

int main()
{
    printf("Please insert Row (M): ");
    int m,n;
    scanf("%d", &m);
    printf("Please insert Column (N): ");
    scanf("%d", &n);

    int data[m][n];

    for (int i = 0; i < m; i++) {
        for (int o = 0; o < n; o++) {
            scanf("%d", &data[i][o]);
        }
    }
    printf("\nTRANSPOSE!\n");
    if (m == n) { //Quadrilateral
    for (int i = 0; i < m; i++) {
        for (int o = 0; o < n; o++) {
            printf("%d ", data[o][i]);
        }
        printf("\n");
    }
    } else { //Another Square
        for (int i = 0; i < n; i++) {
        for (int o = 0; o < m; o++) {
            printf("%d ", data[o][i]);
        }
        printf("\n");
    }
    }
}
