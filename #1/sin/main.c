#include <stdio.h>
#include <stdlib.h>

//A1 = Sin(1)
//A2 = Sin(1 - sin(2))
//A3 = Sin(1 - Sin(2 + sin(3)))

createAnEquation(int a) {
    int i;
    for (i = 1; i <= a; i++) {
        printf("sin(%d", i);
        if (i != a) {
            if (i%2 != 0) {
                printf("-");
            } else {
                printf("+");
            }
        } else {
            printf(")");
        }
    }
    for (i = 2; i <= a; i++) {
        printf(")");
    }
}

main()
{
    int n;
    scanf("%d", &n);

    //S1 = (A1+1)
    //S2 = (A1+2)A1+1
    //S3 = ((A1+3)A2+2)A3+1

    int i;

    for (i = 1; i <= n-1; i++) {
        printf("(");
    }

    for (i = 1; i <= n; i++) {
        createAnEquation(i);
        printf("+%d", (n+1-i));
        if (i != n) {
            printf(")");
        }
    }
}
