#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char o;
    printf("Please insert the 1st integer: "); scanf("%d", &a);
    printf("Please insert the 2nd integer: "); scanf("%d", &b);
    fflush(stdin);
    printf("Enter the operator (+,-,*,\\): "); scanf("%c", &o);

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
