#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("=======================================\n        LEAST COMMON MULTIPLE\n=======================================\n");
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

    int max_,remmant;

    max_=max;

    remmant=max%min;

    while(remmant!=0){
        max=max+max_;
        remmant=max%min;
    }
    //It will multiple number to the maximum

    printf("\nLeast Common Multiple is %d\n", max);
    creditTxt();
    return 0;
}

void creditTxt() {
    printf("Coded by Palapon Soontornpas\n");
}
