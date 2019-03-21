#include <stdio.h>
#include <stdlib.h>

int max = 0;

void calMax(int i) {
    if (i > max)
        max = i;
}

int main()
{
    int count;
    printf("Please insert count of number: ");
    scanf("%d", &count);

    printf("\nPlease insert the integer\n");
    for (int i = 0; i < count; i++) {
        int input;
        scanf("%d", &input);
        if (i == 0)
            max = input;
        else
            calMax(input);
    }

    printf("The maximum number is '%d'\n", max);

    return 0;
}
