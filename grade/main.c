#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    scanf("%d", &score);

    if (score > 50 && score <= 100) {
        printf("pass");
    } else {
        printf("fail");
    }

    return 0;
}
