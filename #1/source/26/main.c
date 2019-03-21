#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int i;

    for(i = 1; i <= a; i++) {
        if (i%2 == 0) {
            printf(" ");
        }
        int m;
        for (m = 1; m <= a; m++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
