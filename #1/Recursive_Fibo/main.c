#include <stdio.h>
#include <stdlib.h>

int f(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    else {
        return f(n-1) + f(n-2);
    }
}

int main()
{
    int n;
    printf("Please insert N in term of Fibo(N): ");
    scanf("%d", &n);
    printf("= %d", f(n));
}
