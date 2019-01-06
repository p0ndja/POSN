#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long data[100000];
    int a,b,i,j,count;
    scanf("%d", &count);
    while(count--) {
        scanf("%d %d", &a, &b); scanf("%lld", &data[0]);
        for (int k = 1; k < a; k++) {
            scanf("%lld", &data[k]); data[k] += data[k-1];
        }
        while(b--) {
            scanf("%d %d", &i, &j); printf("%lld\n", i == 0 ? data[j] : data[j] - data[i-1]);
        }if (count)printf("\n");
    }
    return 0;
}
