#include <stdio.h>
#include <stdlib.h>
void f(int n, int max) {
    if (n == max) {
        //printf(" %d", max);
    } else {
        n++;
        printf("%d ", n);
        f(n, max);
    }
}

int main()
{
    int n;
    printf("Please insert N in term of F(N): ");
    scanf("%d", &n);
    f(0, n);
}
