#include <stdio.h>

main ()
{
    int i = 0;

    char charactor, txt[5000];

    scanf("%s", txt);

    /*
        Number that A and a different is '32'
    */

    while (txt[i] != '\0') {

        charactor = txt[i]; //get charactor

        if (charactor >= 'A' && charactor <= 'Z') {
            txt[i] = txt[i] + 32;
        } //Uppercase to Lowercase

        else if (charactor >= 'a' && charactor <= 'z') {
            txt[i] = txt[i] - 32;
        } //Lowercase to Uppercase

        i++; //Next letter
   }

   printf("%s", txt);

}
