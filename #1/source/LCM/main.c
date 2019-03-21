#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int findMax(int min, int max) {
    if (min == 0 || max == 0) {
        return 0;
    }
    int i;
    for (i = min; i >= 2; i--) {
        if (min%i==0 && max%i == 0) {
            return i;
        }
    }
    return 1;
}
int main()
{
    int a,b,min,max;
    scanf("%d", &a);
    scanf("%d", &b);
    a--; b--;
    a = abs(a);
    b = abs(b);

    if (a > b) {
        min = b;
        max = a;
    } else {
        min = a;
        max = b;
    }

    printf("%d" ,(a+b)-(findMax(min,max)));
}
