#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\n Please insert text \n ");
    char c[1000000];
    gets(c);

    int count_a = 0;
    int count_e = 0;
    int count_i = 0;
    int count_o = 0;
    int count_u = 0;

    for (int i = 0; i < (strlen(c)); i++) {
        if (c[i] == 'a') {
            count_a++;
        } else if (c[i] == 'E' || c[i] == 'e') {
            count_e++;
        } else if (c[i] == 'I' || c[i] == 'i') {
            count_i++;
        } else if (c[i] == 'O' || c[i] == 'o') {
            count_o++;
        } else if (c[i] == 'U' || c[i] == 'u') {
            count_u++;
        }
    }

    printf("\n   count of vowel = %d\n", count_a+count_e+count_i+count_o+count_u);
}
