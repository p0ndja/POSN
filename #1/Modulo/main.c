#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count;
    int much = 0;
    long long divider;
    scanf("%d", &count);
    scanf("%lld", &divider);

    long long result[count];

    for (int i = 0; i < count; i++) {
        long long input;
        scanf("%lld", &input);
        long long re = input%divider;
        int isOrNot = 0;

        if (i != 0) {
        for (int m = 0; m < strlen(result) - 2; m++) {
            if (re == result[m-1]) {
                    printf(" 0\n");
                isOrNot = 0;
            } else {
                printf(" 1\n");
                isOrNot = 1;
            }
        }
        }


        if (isOrNot == 0) {
            much++;
            result[strlen(result) - 1] = re;
        }

    }

    int size = strlen(result) - 1;
    int temp;
    for (int o = 0; o < size; o++) {
    for (int i = 0; i < size; i++) {
        if (result[i] > result[i+1]) {
            temp = result[i];
            result[i] = result[i+1];
            result[i+1] = temp;
        }
    }
    }

    printf("MUCH=%d\n", much);

    for (int i = 0; i < size; i++) {
        printf("%d\n", result[i]);
    }
}
