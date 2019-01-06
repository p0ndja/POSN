#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 1, j = 9, n;
    while (i != 11) {
        if (i%2 == 0) {
            a[11-i] = a[11 - i] - j;
            j -= 4;
        }
        else
            a[i - 1] = a[i - 1] + j;
        i++;
    }

    for (n = 0; n <= 9; n++)
        printf("%d\n", a[n]);
}
