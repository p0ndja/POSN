#include <stdio.h>
#include <stdlib.h>

void checkGrade(int score) {
    if (score >= 80 && score <= 100)
        printf("Result = A, EXCELENT!");
    else if (score >= 75)
        printf("Result = B+, Very GOOD!");
    else if (score >= 70)
        printf("Result = B, Good");
    else if (score >= 65)
        printf("Result = C+, Fairly Good");
    else if (score >= 60)
        printf("Result = C, Fairly");
    else if (score >= 55)
        printf("Result = D+, Poor");
    else if (score >= 50)
        printf("Result = D, Very Poor");
    else
        printf("Result = F, Failure");
}

int main()
{
    int score;
    printf("Please insert score: ");
    scanf("%d", &score);
    checkGrade(score);

    return 0;
}
