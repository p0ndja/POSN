#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int count = 0;

bool isPrime(int a)
{
    for(int o = 2; o < a; o++) {
        if (a%o==0) {
            return false;
        }
    }
    count++;
    return true;
}

int main()
{
    int input;
    printf("=======================================\n              PRIME NUMBER\n=======================================\n");
    printf("Please insert your maximum range for searching prime number: ");
    scanf("%d",&input);

    for(int i = 1; i <= input; i++) {
        if(isPrime(i)) {
            printf("%d, ", i);
        }
    }

    printf("\n\n[There are %d numbers]\n", count);
    return 0;
}
