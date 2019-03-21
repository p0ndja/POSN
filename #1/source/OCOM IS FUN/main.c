#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[10000];
    int minus;
    scanf("%s", &c);
    scanf("%d", &minus);

    int count = 0;

    for (int i = 0; i < (strlen(c) - 1); i++) {
        if ((c[i] == 'C' || c[i] == 'c') && (c[i+1] == 'c' || c[i+1] == 'C'))
            count++;
    }

    if (count - minus >= 0) {
        printf("#OCOMisfun");
        for (int i = 0; i < (count - minus); i++) {
            printf(" fun");
        }
    } else {
        printf("OCOM is not fun");
    }
}
