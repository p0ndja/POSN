#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance;
    scanf("%d", &distance);
    if (distance <= 5) {
        printf("10");
    } else if (distance > 5 && distance <= 10) {
        printf("15");
    } else {
        printf("20");
    }
}
