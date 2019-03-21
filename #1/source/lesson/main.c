#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,avg;
    printf("Please insert X!");
    scanf("%d", &x);
    printf("Please insert Y!");
    scanf("%d", &y);
    printf("Please insert Z!");
    scanf("%d", &z);

    avg = (x+y+z)/3;

    printf("\navg= %d",avg);
    return 0;
}
