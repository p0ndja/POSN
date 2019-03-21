#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\n Please insert amount of students: ");
    scanf("%d", &n);

    int list[n];

    printf(" Insert height: \n ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
        printf(" ");
    }

    printf("RETURN 'Height' with Even Number\n");
    for (int i = 0; i < n; i++) {
            if (list[i] % 2 == 0)
                printf(" %d\n", list[i]);
    }

}
