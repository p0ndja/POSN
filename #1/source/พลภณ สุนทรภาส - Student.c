#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    while (1) {
        int id,score;
        char name[50];

        printf("ID: "); scanf("%d", &id);

        if (id == -9) {
            printf("\nYou entered the '-9' which is for ending while-loop.");
            break;
        }
            printf("Name: "); scanf("%s", &name);
            printf("Score: "); scanf("%d", &score);
            count++;
    }
    printf("\n\nTotal Student = %d student", count);
}
