#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Command: Make a program to get message from user, Replace A/a with '555' and U/u with 'Hanaga' and then print it.
*/

void main()
{
    char data[1000]; //Char Storage
    scanf("%s", data); //Get Char
    int i = strlen(data); //Get Char Length
    for (int o = 0; o < i; o++) //Loop all each char
        if (data[o] == 'U' || data[o] == 'u') //Char[o] = 'U'/'u'
            printf("Hanaga"); //Replace it
        else if (data[o] == 'A' || data[o] == 'a') //Char[o] = 'A'/'a'
            printf("555"); //Replace it
        else printf("%c",data[o]); //Not U/u/A/a

}
