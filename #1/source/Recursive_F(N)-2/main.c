#include <stdio.h>
#include <stdlib.h>

float cal(float n) {
    return (n==1 ? 1 : 1+(n/cal(n-1)));
}
int main()
{
    float n;
    scanf("%f", &n);
    printf("%g", cal(n));
    return 0;
}
