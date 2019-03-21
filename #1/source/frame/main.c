#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int m = 1; m <= 40; m++) {
        printf("*");
    }

    printf("\n");

    for (int o = 1; o <= 10; o++) {
    for (int i = 1; i <= 40; i++) {
        if (i == 1 || i == 40) {
            printf("*");
        } else {
            printf(" ");
        }
    }

    printf("\n");
    }

    for (int m = 1; m <= 40; m++) {
        printf("*");
    }

    printf("\n");
}
