#include <stdio.h>
#include <stdlib.h>

int main()
{
    int candidate, voter;
    printf("Please insert amount of candidates: ");
    scanf("%d", &candidate);
    printf("Please insert amount of voter: ");
    scanf("%d", &voter);

    printf("Enter score of each voter: \n");
    int score[candidate];
    for (int i = 0; i < candidate; i++) {
        score[i] = 0;
    }

    for (int i = 0; i < voter; i++) {
        int input;
        scanf("%d", &input);
        score[input-1]++;
    }
    int max = 0;
    int max_ = 0;
    for (int i = 0; i < candidate; i++) {
        if (score[i] > max) {
            max = score[i];
            max_ = i+1;
        }
    }

    printf("Candidate %d won with %d score", max_, max);
}
