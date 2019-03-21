#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d", &i);
    char a[2];
    scanf("%s", a);

    int x = a[0];
    int m = x + i;

    char result = m;

    printf("%c", result);
}
