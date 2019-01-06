#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    scanf("%d", &count);
    int a[count];
    int c;

    for (int i = 0; i < count; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &c);
    int co = 0;

    for (int i = 0; i < count; i++) {
        if (a[i] == c) {
            printf("%d ", i+1);
            co++;
        }
    }

    if (co == 0)
        printf("0");

    return 0;
}
