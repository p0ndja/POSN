#include <stdio.h>
#include <stdlib.h>

main()
{
    float i;
    float sum = 0;
    float o;

    scanf("%g", &i);

    for (o = 1; o <= i; o++) {
        float a;
        scanf("%g", &a);
        sum = sum + a;
    }

    printf("%.2f", (sum/i));
}
