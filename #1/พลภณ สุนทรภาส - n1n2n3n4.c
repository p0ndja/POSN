#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[99];
    int n1=0,n2=0,n3=0,n4=0;
    printf("Please insert string: ");
    gets(&a);

    int m = strlen(a);

    int start = 0;
    while (start < strlen(a)) {
        switch(a[start]) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            n1++;
            break;
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            n2++;
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            n3++;
            break;
        default:
            n4++;
        }
        start++;
    }
    printf("A-Z (n1) = %d\na-z (n2) = %d\n0-9 (n3) = %d\nElse (n4) = %d", n1,n2,n3,n4);
}
