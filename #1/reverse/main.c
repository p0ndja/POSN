#include <stdio.h>
main()
{
    long input, reversed = 0, remmant;

    scanf("%d", &input);

    while(input != 0) {
        remmant = input%10;
        reversed = reversed*10 + remmant;
        input = input/10;
    }

    printf("%d", reversed);
}
