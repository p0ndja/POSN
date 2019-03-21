#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[7][4];
    for (int i = 0; i < 7; i++) {
        int max = 0;
        int min = 0;
        for (int o = 0; o < 4; o++) {
            scanf("%d", &data[i][o]);
            int input = data[i][o];
                if (input <= min) min = input;
                if (input >= max) max = input;
            printf("%d %d", min, max);
        }
        printf("\nDAY %d: ", i+1);
        printf("\n06.00: %d", data[i][0]);
        printf("\n12.00: %d", data[i][1]);
        printf("\n18.00: %d", data[i][2]);
        printf("\n24.00: %d", data[i][3]);
        printf("\nMin = %d", min);
        printf("\nMax = %d\n", max);
    }
}
