#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h=0,m=0;
    int min;

    scanf("%d %d", &h, &m);
    scanf("%d", &min);

    h = h + (min/60);
    m = m + (min%60);

    if (m>=60) {
        h = h + (m/60);
        m = m%60;
    }

    while(h >= 24) {
        h = h - 24;
    }

    if (h < 10 && m < 10) {
        printf("0%d 0%d", h,m);
    } else if (h > 10 && m < 10) {
        printf("%d 0%d", h,m);
    } else if (h < 10 && m > 10) {
        printf("0%d %d", h,m);
    } else {
        printf("%d %d", h,m);
    }

}
