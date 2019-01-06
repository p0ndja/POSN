#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char o;
    printf("Pleas insert the equation: ");
    scanf("%d%c%d", &a, &o, &b);

    printf("%d %c %d = ", a, o, b);

    switch(o) {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        printf("%d", a/b);
        break;
    default:
        printf("other case.");
    }
    return 0;
}
