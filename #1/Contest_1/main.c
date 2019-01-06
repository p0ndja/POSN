#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    scanf("%d", &count);
    int o,m,i;
    printf("\n");
    for (i = 0; i < count; i++) {
        int amount,set;
        scanf("%d %d", &amount, &set);
        int data[amount],start[amount],end[amount];

        for (o = 0; o < amount; o++) {
            scanf("%d", &data[o]);
        }

        for (o = 0; o < set; o++) {
            scanf("%d %d", &start[o], &end[o]);
            int sum = 0;
            for (m = start[o]; m <= end[o]; m++) {
                sum += data[m];
            }
            printf("%d\n", sum);
        }
        printf("\n");
    }
}

