#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,mode;

    scanf("%d %d", &size, &mode);

    long long x[size];
    long long y[size];
    long long count = 0;

    if (size > 1000 || size < 0)
        return 0;

    if (mode > 1 || mode < 0)
        return 0;

    for (int i = 0; i < size; i++) {
        scanf("%lld", &x[i]);
    }

    long long temp;
    for (int o = 0; o < size; o++) {
        for (int i = 0; i < size; i++) {
            if (x[i] > x[i+1]) {
                temp = x[i];
                x[i] = x[i+1];
                x[i+1] = temp;
            }
        }
    }

    if (mode == 1) {
        for (int i = size-1; i >= 0; i--)
            printf("%lld ", x[i]);
    } else if (mode == 0) {
        for (int i = 0; i < size; i++)
            printf("%lld ", x[i]);
    } else {
        return 0;
    }

    return 0;
}
