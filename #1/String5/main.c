#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\n Please insert amount of students: ");
    scanf("%d", &n);

    int list[n];

    printf(" Insert score: \n ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
        printf(" ");
    }

    printf("RETURN in term of graph\n ");
    for (int i = 0; i < n; i++) {
        if (list[i] == 0) {
            printf("0");
        } else {
        for (int m = 0; m < list[i]; m++)
                printf("*");
        }
        printf("\n ");
    }

}
