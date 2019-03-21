#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Input size: ");
    scanf("%d", &size);
    int x[size]; //2 bytes per channel
    int count = 0;

    for (int i = 0; i < size; i++) {
        int o;
        printf(" ");
        scanf("%d", &o);
        if (o < 0) {
            printf(" NUMBER BELOW 0 MEANS END OF FILE");
            break;
        }
        x[i] = o;
        count++;
    }

    printf("\n\n COUNT: %d \n\n", count);
/*
    for (int i = 0; i < count; i++) {
        printf(" Student Number %d has %d score\n", i+1, x[i]);
    }
*/
}
