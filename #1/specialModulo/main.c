#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int mod(char num[], int divider) {

    int remmant = 0;

    for (int i = 0; i < strlen(num); i++) {
        remmant = ((remmant * 10) + ((int) num[i] - '0')) % divider;
    }

    return remmant;
}

int main()
{
    int divider;
    char num[1000000];
    scanf("%s", &num);
    scanf("%d", &divider);
    printf("%d", mod(num, divider));
}
