#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    int count = -1;
    int queue = 0;
    int data[limit];
    char commander[5];

    int n = 0;

    while(1) {
        scanf("%s", &commander);

        if (commander[0] == 'p' && commander[1] == 'o') {
            if (queue > count)
                printf("null");
            else {
                printf("%d", data[queue]);
                queue++; n--;
                printf(" Q=%d ", queue);
            }
            printf("\n");
        } else {
            if (n == limit) {
                printf("Out of Memory to keep in queue\n");
            } else {
            count++; n++;
            scanf("%d", &data[count]);
            printf(" C=%d ", count);
            }
        }

    }
}
