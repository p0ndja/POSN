#include <stdio.h>
#include <stdlib.h>

int max = 0;

int calMax(int x) {
    if (x > max) {
        max = x;
    }
}
int main()
{
    int count;
    scanf("%d", &count);
    int a[count];

    for (int i = 0; i < count; i++) {
        int bb;
        scanf("%d", &bb);
        a[i] = bb;
        calMax(bb);
    }

    for (int i = 0; i < max; i++) {
        for (int m = 0; m < count; m++) {
            if (a[m] >= max-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
