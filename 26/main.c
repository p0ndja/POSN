#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    for (int i = 1; i <= a; i++) {

        for (int o = 1; o <= i; o++) {
                if (o%2==0) {
                 printf("-");
                } else {
                    printf("*");
                }
        }
        printf("\n");

    }

    return 0;
}
