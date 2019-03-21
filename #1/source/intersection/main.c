#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,amount,count=0;
    scanf("%d" , &size);
    scanf("%d" , &amount);

    int A[size];
    int B[amount];

    for (int i = 0; i < size; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < amount; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < amount; i++) {
        for (int o = 0; o < size; o++) {
            if (B[i] == A[o]) {
                count++;
            }
        }
    }

    printf("%d", count);
}
