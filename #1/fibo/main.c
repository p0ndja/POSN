#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a,b;

int fibo(int d){
    //Try to find pattern of AntFibo!
    if(d == 0)  return a;
    else if(d == 1)  return b;
    else if(d == 2)  return a + b;
    else if(d == 3)  return a + (2 * b);
    else if(d % 4 == 0)  return b * 2;
    else if(d % 4 == 1)  return b * 1;
    else if(d % 4 == 2)	return b * 3;
    else if(d % 4 == 3)	return b * 4;
}

int main()
{
    int count;
    int n;
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &n);

        if (a < 0 || b > 30 || b < 0 || n > 1000 || n < 0) {
            return 0;
        }

        printf("%d\n",fibo(n));
    }
}
