#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int count = 0;

int max(int min, int max) {

}

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
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    a = abs(a);
    b = abs(b);
    if (!isPrime(a) || !isPrime(b)) {
        return false;
    }
}
