#include <stdio.h>

int main()
{
    int input;
    int factorial = 1;

    printf(">>>>>>>>>>Factorial calculator<<<<<<<<<<\n");
    printf("Please insert your number!\n");
    scanf("%i", &input);

    while(input > 10 || input < 0) {
        printf("You're entered number that isn't in range of [0,10]\nPlease insert the new number!\n");
            scanf("%i", &input);

    }

    for(int i = input; i > 0; i--) {
        factorial = factorial * i;
    }

    printf("Your %d! is %d\n", input, factorial);

    return 0;
}
