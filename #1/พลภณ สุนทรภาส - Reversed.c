#include <stdio.h>
int main()
{
    int input, reversed = 0, remmant;

    printf("Please enter number to reserve: ");
    scanf("%d", &input);

    while(input != 0) {
        remmant = input%10;
        reversed = reversed*10 + remmant;
        input = input/10;
    }

    printf("REVERSED: %d", reversed);

    return 0;
}
