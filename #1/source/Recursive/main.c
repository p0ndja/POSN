#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int expo(int a) {
    if (a <= 0) {
        return 1;
    } else {
        return expo( a - 1 ) + expo( a - 1 );
    }
}

int main()
{
    int a;
    printf("Insert int: ");
    scanf("%d", &a);
    printf("Return EXPO: %d", expo(a));
}
