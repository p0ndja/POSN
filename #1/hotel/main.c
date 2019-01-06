#include <stdio.h>
#include <stdlib.h>

int main()
{
    long p;
    scanf("%d", &p);
    if (p%15 > 10) {
        p = p + (15 - (p%15));
    } else if (p%5==4) {
        p++;
    }
    long normal = checkOut(p);
    printf("%d", normal);
    return 0;
}

int checkOut(long p) {
    long d = p/15;
    long dm = p%15;
    long c = dm/5;
    long cm = dm%5;
    long b = cm/2;
    long a = cm%2;
    return (d*3000) + (c*1500) + (b * 800) + (a * 500);
}
