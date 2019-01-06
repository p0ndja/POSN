#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("=======================================\n        PERFECT NUMBER FINDER\n=======================================\n");

    int start,end;

    start = 1;
    end = 500;

    printf("Start at %d\n", start);
    printf("End at %d\n", end);

    printf("\nThe perfect number between [%d,%d]: ", start,end);
    for(int i = start; i <= end; i++) {
        int sum = 0;
        for(int o = start; o <= i; o++) {
            if (i%o==0) {
                if (o != i) {
                    sum = sum + o;
                }
            }
        }
        if (sum == i)
            printf("%d ", i);
    }
    creditTxt();
}

void creditTxt() {
    printf("\n\nCoded by Palapon Soontornpas\n");
}
