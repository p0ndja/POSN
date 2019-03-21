#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int size;
    scanf("%d", &size);

    char x[size];

    for (int i = 0; i < size; i++) {
        scanf("%s", &x[i]);
    }

    for (int i = 0; i < size; i++) {
        char a = x[i];
        if (a == '_') {
            a = ' ';
        }
        printf("%c", a);
    }
    */

    char a[11];
    a[0] = 'I';
    a[1] = ' ';
    a[2] = 'a';
    a[3] = 'm';
    a[4] = ' ';
    a[5] = 'f';
    a[6] = 'i';
    a[7] = 'n';
    a[8] = 'e';
    a[9] = '.';
    a[10] = '\0';
    printf("%s", a);
}
