#include <stdio.h>
#include <stdlib.h>

int main()
{
    int runner, count;
    scanf("%d %d", &runner, &count);
    int set[runner];
    int start[count];
    int end[count];

    for (int i = 0; i < runner; i++) {
        scanf("%d", &set[i]);
    }

    for (int i = 0; i < count; i++) {
        scanf("%d", &start[i]);
        scanf("%d", &end[i]);
    }

    for (int i = 0; i < count; i++) {

        int sum = 0;

        for (int o = start[i] - 1; o < end[i]; o++) {
            sum += set[o];
        }

        printf("%d\n", sum);
    }
}
