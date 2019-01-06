#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5] = {5,3,2,6,1};
    int i,j;

    for (i = 0; i < 5; i ++) {
        for (j = 0; j < n[i]; j++)
            printf("*");
        printf("\n");
    }
}
