#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[501];
    int count = 0;

    for (int i = 0; i < 501; i++) {
        int temp;
        scanf("%d", &temp);
        if (temp < 0 || temp > 10) {
            break;
        }
        a[i] = temp;
        count++;
    }

    for (int m = 0; m < count; m++) {
        for (int o = (count - m); o > 1; o--) {
            printf(" ");
        }
        printf("%d", a[m]);
        for (int o = 0; o <= m - 1; o++) {
            printf("%d", a[m]);
        }
        printf("\n");
    }

    return 0;
}
