#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
    TEST CASE:
    9
    2 4 5 4 10 9 8 3 1
*/
int main()
{
    int count;
    scanf("%d", &count);
    int data[count];
    for (int i = 0; i < count; i++) scanf("%d", &data[i]);

    int leastValue = 0, leastIndex = 0, startIndex = 0;
    for (int i = 0; i < count; i++) {
        leastValue = INT_MAX;
        for (int o = startIndex; o < count; o++) {
            if (leastValue > data[o]) {
                leastValue = data[o];
                leastIndex = o;
                //printf(" LEAST= %d(%d) ", leastValue, o);
            }
        }
        printf("\n");
        int temp = data[startIndex];
        data[startIndex] = leastValue;
        data[leastIndex] = temp;
        startIndex++;
    }
    for (int i = 0; i < count; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}
