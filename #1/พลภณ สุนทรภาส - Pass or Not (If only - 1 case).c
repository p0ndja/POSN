#include <stdio.h>
#include <stdlib.h>

main()
{
    int id, score;
    char name[20];

    printf("Please enter ID: ");
    scanf("%d", &id);

    printf("Please enter Name: ");
    scanf("%s", &name);

    printf("Please enter Score: ");
    scanf("%d", &score);

    if (score >= 60) {
        printf("Name: %s (ID:%d) is passed with score %d.", name, id, score);
    }
}
