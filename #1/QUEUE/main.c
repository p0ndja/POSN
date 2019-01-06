#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int size,count = 0;

        scanf("%d", &size); //Get amount of command

    int library[size]; //Create library

    char commander[50]; //For Compare

    strcpy(commander, "push"); //Copy push to char
    for (int i = 0; i<size; i++) {
        char order[5];
        scanf("%s", &order); //Get order
        if (strcmp(order,commander) == 0) { //Mean User order 'push' that similar. 'CMP' == COMPARE
            scanf("%d", &library[count]);
            count++;
        } else {
            if (count==0) //No data left in library
                printf("null\n");
            else { //Still have data in library, pop it out!
                printf("%d\n", library[count-1]);
                count--;
            }
        }
    }
}
