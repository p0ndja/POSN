#include <stdio.h>
#include <stdlib.h>

main()
{
    int n = 0;
    int i;
    for (i = 1; i <= 100; i++) {
        if (i%3==0)
        n = n + i;
    }

    printf("%d", n);
}
