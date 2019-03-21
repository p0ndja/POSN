#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);

    int data[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }

    printf("0 ");
    for (int i = 0; i < size - 1; i++) {
            printf("%d ", data[i+1] - data[i]);
    }
}
