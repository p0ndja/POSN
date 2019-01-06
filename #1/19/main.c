#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

maxDivide(long min,long max){
    for(long i = max; i > 1; i--) {
        if (min%i == 0 && max%i == 0) {
            return i;
        }
    }
    return 1;
}

main()
{
    long x,y,min,max;
    scanf("%ld", &x);
    scanf("%ld", &y);

    y = abs(y);
    x = abs(x);

    if (x > y) {
        min = y;
        max = x;
    } else {
        min = x;
        max = y;
    }

    long maxD = maxDivide(min, max);
    long minC = (x*y)/(maxD);

    printf("%ld", minC);
}
