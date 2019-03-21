#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int length = a + b;
    int oStart = a;
    int prop = pow(a,b) + 2;

    int data[length];
    int i,o;

    //Generate 0,1 into data[] array
    for (i = 0; i < a; i++) data[i] = 0;
    for (o = 0; o < b; o++) data[i + o] = 1;

    //Debug: for (i = 0; i < length; i++) printf("%d", data[i]);

    return 0;
}
