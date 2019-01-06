#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("=======================================\n        FACTOR NUMBER FINDER\n=======================================\n");
    printf("Please insert integer: ");
    scanf("%d", &x);

    while (x <= 0) {
        printf("You insert number below than 0 or equal 0.\nPlease insert the new integer: ");
        scanf("%d", &x);
    }

    printf("\nThe factor numbers of '%d' are ", x);
    for(int i = 1; i <= x; i++) {

        if (x%i==0) {
                //It's factor
            if (i == x) {
                printf(" and %d\n", i);
            } else if (i == 1) {
                printf("%d", i);
            } else {
                printf(", %d", i);
            }
        }
    }
    creditTxt();
}

void creditTxt() {
    printf("Coded by Palapon Soontornpas\n");
}
