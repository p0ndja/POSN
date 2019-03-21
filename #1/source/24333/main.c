#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start=1,end=500;

    int i;
    int count = 0;
    for(i = start; i <= end; i++) {
        int sum = 0;
        int a;
        for(a = start; a <= i; a++) {
            if (i%a==0) {
                if (a != i) {
                    sum = sum + a;
                }
            }
        }
        if (sum == i)
            count++;
    }
    printf("%d\n", count);
    for(i = start; i <= end; i++) {
        int sum = 0;
        int a;
        for(a = start; a <= i; a++) {
            if (i%a==0) {
                if (a != i) {
                    sum = sum + a;
                }
            }
        }
        if (sum == i)
            printf("%d ", i);
    }
}
