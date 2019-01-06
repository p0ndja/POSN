#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a,b,c;

int main()
{
    int a,b,c,input;
    char txt[3000];

    scanf("%d", &input);

    a = input/100;
    b = (input%100)/10;
    c = input%10;

    scanf("%s", txt);

    int p,q;

    for (int i = 0; i < strlen(txt); i++) {

        p = txt[i] - 48; //Change char to number
        q = p + a + b + c - 3 + ((a*i) - (i) + (c*i));

        if (q>9)
            q = (q%10) + (q/10);
        if (q>9)
            q = (q%10) + (q/10);
        printf("%d", q);

    }

    return 0;
}
