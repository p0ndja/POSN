#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int count = 0;
bool isPrime(int a)
{
    int o;
    for(o = 2; o < a; o++) {
        if (a%o==0) {
            return false;
        }
    }
    count++;
    return true;
}

bool isPrime2(int a)
{
    int o;
    for(o = 2; o < a; o++) {
        if (a%o==0) {
            return false;
        }
    }
    return true;
}

main()
{
    int limit;
    scanf("%d", &limit);
    int n;
    for (n = 2; n <= limit; n++) {
        isPrime(n);
    }
    printf("%d\n", count);
    for (n = 2; n <= limit; n++) {
        if(isPrime2(n)) {
            printf("%d ", n);
        }
    }
}
