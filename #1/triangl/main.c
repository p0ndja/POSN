#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    printf("Please insert integer: ");
    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        for (int o = (input - i); o > 1; o--) {
            printf(" ");
        }
        printf("A");
        for (int o = 0; o <= ((2*i) - 1); o++) {
            printf("A");
        }
        printf("\n");
    }
}
