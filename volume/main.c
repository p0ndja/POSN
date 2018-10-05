#include <stdio.h>
#include <stdlib.h>

int main()
{
    int radius,height;

    scanf("%d", &radius);
    scanf("%d", &height);

    printf("%.2f", 3.14 * radius * radius * height);

    return 0;
}
