
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    for (int i = 1; i < 1; i++) {

        for (int p = 1; p <= (a-i); p++) {
            printf("-");
        }

        for (int o = 1; o <= i; o++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
