#include <stdio.h>
#include <stdlib.h>

void star(int i) {
    for (int m = 0; m < i; m++) {
    for (int o = 0; o < i; o++) {
        printf("*");
    }
    printf("\n");
    }
}

int main()
{
    int input;
    printf("Please insert the integer: ");
    scanf("%d", &input);
    star(input);
    return 0;
}
