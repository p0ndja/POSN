#include <stdio.h>
#include <stdlib.h>

int main()
{
    float min,bal = 0;
    scanf("%g", &min);

    if (min <= 600) {
        printf("300");
    } else {
        min = min - 600;
        printf("%g", 300 + (min * 1.5));
    }
}
