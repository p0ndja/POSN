#include <stdio.h>
#include <stdlib.h>

sym_odd(int i) {
    for (int o = 0; o < i; o++) {
        if (o%2==0)
            printf("^");
        else
            printf("*");
    }
}

sym_even(int i) {
    for (int o = 0; o < i; o++) {
        if (o%2==0)
            printf("*");
        else
            printf("^");
    }
}

dat(int i) {
    for (int o = i; o >= 1; o--) {
        printf("-");
    }
}

main()
{
    int input;
    scanf("%d", &input);

    for (int o = 1; o <= input; o++) {
        dat(input - o);
        if (input%2==0) {
            sym_even(o);
        } else {
            sym_odd(o);
        }
        printf("\n");
    }
}
