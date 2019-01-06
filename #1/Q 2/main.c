#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    scanf("%d", &count);
    int a[count];
    int b[count];

    int score_a=0, score_b=0;

    for (int i = 0; i < count; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < count; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < count; i++) {
        if (a[i] > b[i]) {
            score_a+=2;
        } else if (a[i] < b[i]) {
            score_b+=2;
        } else {
            score_a++;
            score_b++;
        }
    }

    if (score_a > score_b)
        printf("Team 1 wins! Score %d to %d", score_a, score_b);
    else if (score_b > score_a)
        printf("Team 2 wins! Score %d to %d", score_b, score_a);
    else
        printf("DRAW GAME! Score %d to %d", score_a, score_b);
    return 0;
}
