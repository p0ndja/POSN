#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int input;
    printf("Please insert amount of messages: "); scanf("%d", &input);
    printf("Please insert txt: \n");
    int r = input+1;
    int c = 99;
    char s[r][c];
    int ls[r];
    char temp[c];
    for (int i = 0; i < r; i++) {
        gets(temp);
        ls[i] = strlen(temp);
        for (int j = 0; j < strlen(temp); j++) {
            s[i][j] = temp[j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < ls[i]; j++) {
            printf("%c ", s[i][j]);
        }
        printf("\n");
    }
}
