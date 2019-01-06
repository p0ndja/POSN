#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(char ok[], int i) {
    if (i == 1)
        printf("%c", ok[i-1]); //Last char, No more loop
    else {
        printf("%c", ok[i-1]);
        rev(ok, i-1);
    }
}

int main()
{
    char txt[300]; scanf("%s", &txt);
    rev(txt, strlen(txt));
}
