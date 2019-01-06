#include <stdio.h>
#include <stdlib.h>

int det(int x, int y) {
}

int main()
{
    printf("Set Row & Column as default settings: 3 x 3\n");
    int m = 3, n = 3;

    int data[m][n];

    for (int i = 0; i < m; i++) {
        for (int o = 0; o < n; o++) {
            scanf("%d", &data[i][o]);
        }
    }

    int det = (data[0][0] * data[1][1] * data[2][2]) + (data[1][0] * data[2][1] * data[0][2]) + (data[2][0] * data[0][1] * data[1][2]) - (data[2][0] * data[1][1] * data[0][2]) - (data[2][1] * data[1][2] * data[0][0]) - (data[2][2] * data[1][0] * data[0][2]);
    printf("%d", det);
}
