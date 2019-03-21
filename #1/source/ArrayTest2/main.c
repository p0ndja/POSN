#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size;
    printf("Input size: ");
    scanf("%d", &size);
    float x[size]; //2 bytes per channel

    for (int i = 0; i < size; i++) {
            scanf("%f", &x[i]);
    }

    float sum = 0;

    for (int i = 0; i < size; i++) {
            sum = sum + x[i];
    }
    printf("%g", sum/size);

    printf("\n\nMore than avg: ");

    for (int i = 0; i < size; i++) {
            if (x[i] > sum/size) {
                printf("%g ", x[i]);
            }
    }

    float max = 0;

    for (int i = 0; i < size; i++) {
            if (x[i] > max) {
                max = x[i];
            }
    }

    printf("\n\nThe maximum number is %g\n", max);

}
