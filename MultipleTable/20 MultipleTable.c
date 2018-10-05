#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start=2;
    int end=99;
    for (int i = start; i <= end; i++) {
        printf("\n========================================\n            Multiple of %d\n========================================\n", i);
        for (int o = 1; o <= 12; o++) {
            printf("%d * %d = %d\n", i, o, i*o);
        }
    }
    creditTxt();
    return 0;
}
void creditTxt() {
    printf("\nCoded by Palapon Soontornpas\n");
}
