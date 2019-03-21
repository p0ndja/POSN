#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size;
    printf("Input size: ");
    scanf("%d", &size);
    int x[size]; //2 bytes per channel

    printf("Insert %d Number: \n", size);
    for (int i = 0; i < size; i++) {
            printf(" ");
            scanf("%d", &x[i]);
    }

    printf("\n\n ! ! ! REVERSED ! ! !\n\n");

    for (int i = (size-1); i >= 0; i--) {
        printf(" %d\n", x[i]);
    }
}
