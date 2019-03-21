#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = -1;
    int queue = 0;
    int data[n];
    char commander[n][5];

    for (int i = 0; i < n; i++) {
        scanf("%s", &commander[i]);
        if (commander[i][0] == 'p' && commander[i][1] == 'o') {
            if (queue > count)
                printf("null");
            else {
                printf("%d", data[queue]);
                queue++;
                //printf(" Q=%d ", queue);
            }
            printf("\n");
        } else {
            count++;
            scanf("%d", &data[count]);
            //printf(" C=%d ", count);
        }
    }

}
