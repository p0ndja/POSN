#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    scanf("%d", &h);
    scanf("%d", &m);

    int n = m - 45;
    if (n < 0) {
        if ((h - 1) == -1) {
            h = 23;
        } else {
            h = h-1;
        }

        m = 60 + n;

    } else {
        m = n;
    }

    printf("%d %d", h, m);

}
