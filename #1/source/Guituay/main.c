#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line,set,runner;
    scanf("%d", &line);
    scanf("%d", &set);
    scanf("%d", &runner);
    long long count_line[line];
    int start[set];
    int end[set];
    int setRunner[set];

    for (int i = 0; i < line; i++) {
        count_line[i] = 0;
    }

    for (int i = 0; i < set; i++) {
        scanf("%d", &start[i]);
        scanf("%d", &end[i]);
    }

    for (int i = 0; i < runner; i++) {
        int input;
        scanf("%d", &input);
        input--;

        for (int o = start[input] - 1; o < end[input]; o++) {
            count_line[o]++;
        }

    }

    for (int i = 0; i < line; i++) {
        printf("%d\n", count_line[i]);
    }

    return 0;
}
