#include <stdio.h>
#include <stdlib.h>

int pow(int a, int p)
{
    return (p==0 ? 1: a*pow(a, p-1));

    //Meaning of A ? B : C V V V V V
    /*if (p == 0) return 1;
    return (a*pow(a, p-1)); */
}

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", pow(a,b));
}
