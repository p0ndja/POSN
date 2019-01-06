#include <stdio.h>
#include <stdlib.h>

int f(int n) {
    if (n == 0)
        return 1;
    else
        return f(n-1)*n;
}

int main()
{
    int n;
    printf("Please insert N in term of N!: ");
    scanf("%d", &n);
    printf("%d", f(n));
}
