#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Please insert letter (CAPITAL): "); scanf("%c", &a);

    switch(a) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'H':
    case 'W':
    case 'Y':
        printf("0");
        break;
    case 'B':
    case 'F':
    case 'P':
    case 'V':
        printf("1");
        break;
    case 'C':
    case 'G':
    case 'J':
    case 'K':
    case 'Q':
    case 'S':
    case 'X':
    case 'Z':
        printf("2");
        break;
    case 'D':
    case 'T':
        printf("3");
        break;
    case 'L':
        printf("4");
        break;
    case 'M':
    case 'N':
        printf("5");
        break;
    case 'R':
        printf("6");
        break;
    default:
        printf("9");
    }

    return 0;
}
