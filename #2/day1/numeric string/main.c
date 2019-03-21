#include <stdio.h>
#include <stdlib.h>

/*
TEST CASE:
--------------------------
5
--------------------------
7
2 4 3 5 6 9 70
50 40 10 6 2 30 60
10 30 7 5 7 20 40
8 7 9 7 7 6 5
2 8 3 6 7 9 8
70 30 80 90 20 10 60
40 20 10 50 70 60 30
--------------------------
*/

int main()
{
    int size;
    scanf("%d", &size);
    int data[size][size];
    for (int i = 0; i < size; i++)
        for (int o = 0; o < size; o++)
            scanf("%d", &data[i][o]);
    int sum = 0;
    for (int i = 0; i < size; i++)
        for (int o = 0; o < size; o++)
            if (i == o) {
                sum += data[i][o];
                printf("(x=%d, y=%d = %d)", i, o, data[i][o]);
            }
            else if ((i + o == (size-1))) {
                sum += data[i][o];
                printf("(x=%d, y=%d = %d)", i, o, data[i][o]);
            }
    printf("%d", sum);
}
