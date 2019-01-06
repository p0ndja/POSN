#include <stdio.h>
#include <stdlib.h>

main()
{
    int n;
    printf("Please insert integer: ");
    scanf("%d", &n);
    if (n%2 == 0) {
        printf("Integer %d is even.", n);
    } else {
        printf("Integer %d is odd.", n);
    }
}
