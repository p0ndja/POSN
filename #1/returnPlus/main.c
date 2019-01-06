#include <stdio.h>
#include <stdlib.h>

main()
{
    int x;
    printf("Please enter X: ");
    scanf("%d", &x);

    if (x < 0) {
        x = -x;
    }

    printf("|x| is %d", x);
}
