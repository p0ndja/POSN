#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nPlease insert integer: ");
    scanf("%d", &n);
    printf("\n");
    for (int m = 1; m <= n; m++) {
        for (int o = m; o >= 1; o--) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
        printf("\nPlease insert integer: ");
    scanf("%d", &n);

    for (int m = n; m >= 1; m--) {
        for (int o = 1; o <= m; o++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
        printf("\nPlease insert integer: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int o = (n - i); o > 1; o--) {
            printf(" ");
        }
        printf("*");
        for (int o = 0; o <= ((2*i) - 1); o++) {
            printf("*");
        }
        printf("\n");
    }
}
