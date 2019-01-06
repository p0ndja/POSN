#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("=======================================\n        GREATEST COMMON DIVISOR\n=======================================\n");
    printf("Please insert the 1st integer: ");
    scanf("%d", &x);

    while (x <= 0) {
        printf("You insert number below than 0 or equal 0.\nPlease insert the new 1st integer: ");
        scanf("%d", &x);
    }

    printf("Please insert the 2nd integer: ");
    scanf("%d", &y);

    while (y <= 0) {
        printf("You insert number below than 0 or equal 0.\nPlease insert the new 2nd integer: ");
        scanf("%d", &y);
    }

    int min = 0;
    int max = 0;
    if (x > y) {
        min = y;
        max = x;
    } else {
        min = x;
        max = y;
    }

    int remmant,sum;
    sum = 1;

    for(int i = 1 ; i < max ; i++) {
        if (min%i == 0 && max%i == 0) {
            if (sum%i == 0) {
                //Skip this
                //Common factor
            } else {
            sum = sum*i;
            }
        }
    }

    printf("\nGreatest Common Divisor is %d\n", sum);
    creditTxt();
    return 0;
}

void creditTxt() {
    printf("Coded by Palapon Soontornpas\n");
}
