#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);

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

    printf("%d", max);
    return 0;
}
