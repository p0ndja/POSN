#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("=======================================\n           Amicable Numbers\n=======================================\n");
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

    int sum_x = 0;
    for(int i = 1; i <= x; i++) {
        if (x%i == 0) {
            sum_x = sum_x + i;
        }
    }
    sum_x = sum_x - x;

    printf("\nSummary of %d's factor number is %d", x, sum_x);

    int sum_y = 0;
    for(int i = 1; i <= y; i++) {
        if (y%i == 0) {
            sum_y = sum_y + i;
        }
    }
    sum_y = sum_y - y;

    printf("\nSummary of %d's factor number is %d", y, sum_y);

    if (sum_y == x && sum_x == y) {
        printf("\n\nBoth number are amicable numbers\n");
    } else {
        printf("\n\nBoth number are *not* amicable numbers\n");
    }
    creditTxt();
    return 0;
}
void creditTxt() {
    printf("\n\nCoded by Palapon Soontornpas\n");
}
