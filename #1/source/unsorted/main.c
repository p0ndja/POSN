#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("2 1 ");
    for (int i = 3; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
