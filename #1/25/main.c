#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);

    int sum_x = 0;
    int sum_y = 0;
    int i; //FOR LOOP

    //===================FIND FACTOR==============
    for(i = 1; i <= x; i++) {
        if (x%i == 0) {
            sum_x = sum_x + i;
        }
    }
    sum_x = sum_x - x;

    for(i = 1; i <= y; i++) {
        if (y%i == 0) {
            sum_y = sum_y + i;
        }
    }
    sum_y = sum_y - y;

    //=====SUM_FACX = Y -- SUM_FACY = X============
    if (sum_y == x && sum_x == y) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}
