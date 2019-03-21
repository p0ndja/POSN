#include <stdio.h>
#include <math.h>

long long main() {
    long long c,i,m;
    c = 1;
    //scanf("%d", &c);
    for (i = 0; i < c; i++) {
        long long a,b;

        //scanf("%lld %lld", &a, &b);
        a = 1000000007;
        b = 8;
        long long top = 1;
        long long bot = 1;
        long long bott = 1;
        for (m = 2; m <= a; m++) {
            top = top * m;
            printf("top%d ", m);
        }
        for (m = 2; m <= a - b; m++) {
            bot = bot * m;
            printf("bot ");
        }
        for (m = 2; m <= b; m++) {
            bott = bott * m;
            printf("bott ");
        }
        printf("%d\n", top/(bot*bott));
    }
    return 0;
}
