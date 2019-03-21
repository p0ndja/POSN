#include <stdio.h>
#include <stdlib.h>

main()
{
    int id;
    char name[20], gender[1];

    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter Name: ");
    scanf("%s", &name);

    fflush(stdin);

    printf("Enter Gender: ");
    scanf("%c", &gender[1]);

    if (gender[1] == 'M')
        printf("He is Male\n");
    else
        printf("She is Female\n");

}
