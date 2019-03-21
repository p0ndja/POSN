#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int request;
    scanf("%d", &size);
    scanf("%d", &request);

    int data[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < request; i++) {
        int count[size];
        for (int m = 0; m < size; m++) {
            count[m] = 0;
        }
        int start,end;
        scanf("%d", &start);
        scanf("%d", &end);
        for (int i = start; i <= end; i++) {
            count[data[i]-1]++;
        }
        int max = 0;
        for (int i = 0; i < size; i++) {
            if (count[i] > max)
                max = count[i];
        }
        printf("%d\n", max);
    }
}
