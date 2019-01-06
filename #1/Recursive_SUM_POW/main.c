#include <stdio.h>
#include <stdlib.h>

int pow(int a, int p)
{
    if (p == 0) return 1;
    return (p==0 ? 1: a*pow(a, p-1));

    //Meaning of A ? B : C V V V V V
    /*if (p == 0) return 1;
    return (a*pow(a, p-1)); */
}

int loop(int a, int p) {
    if (a == 1)
        return pow(-1,a-1)*pow(1,p);
    return pow(-1,a-1)*pow(a,p) + pow(a-1,p);
}

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = 0;

    /*for (int i = 1; i <= a; i++) {
        sum += (pow(-1,i+1) * pow(i,b));
    }*/
    printf("%d", loop(a,b));
    //printf("%d", sum);
}
