#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size;
    printf("Input size: ");
    scanf("%d", &size);
    int x[size]; //2 bytes per channel


    for (int i = 0; i < size; i++) {
            scanf("%d", &x[i]);
    }

    int sum = 0;

    for (int i = (size-1); i >= 0; i--) {
            sum += x[i];
    }

    printf("%d", sum);
}
