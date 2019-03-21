#include <stdio.h>
#include <stdlib.h>

/*
    Command: Get each character until user input '%', count it and print out when input '*'
*/
int main()
{
    int count[52]; for (int i = 0; i < 52; i++) count[i] = 0;
    while(1) {
        char A[2]; scanf("%s", A); int d = A[0];

        if (d >= 65 && d <= 90) count[d-65]++; //Capital
        else if (d >= 97 && d <= 122) count[d-71]++; //Lower case

        for (int i = 0; i < 26; i++) printf("\n%c=%d", i+65, count[i]); //Print each of capital
        for (int i = 26; i < 52; i++) printf("\n%c=%d", i+71, count[i]); //Print each of lower

        if (A[0] == '%')
            return 0;
    }

}
