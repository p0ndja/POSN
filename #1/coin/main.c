#include <stdio.h>
#include <stdlib.h>

int c10,c5,c1;

void cal(int i) {
    int ten = i/10;
    int five = (i%10)/5;
    int one = (i%10)%5;

    if (ten > c10) {
        for (int o = 0; o < (ten - c10); o++)
            five += 2;
        ten = c10;
    }

    if (five > c5) {
        for (int o = 0; o < (five - c5); o++)
            one += 5;
        five = c5;
    }

    if (one > c1) {
        printf("ERROR ! ! ! NOT ENOUGH COIN ! ! !");
    } else {
        printf("Ten Baht= %d\n", ten);
        printf("Five Baht= %d\n", five);
        printf("One Baht= %d\n", one);
    }
}
int main()
{
    int a;
    printf("Please insert amount of 10 Baht coin: ");
    scanf("%d", &c10);
    printf("Please insert amount of 5 Baht coin: ");
    scanf("%d", &c5);
    printf("Please insert amount of 1 Baht coin: ");
    scanf("%d", &c1);
    printf("Please insert money: ");
    scanf("%d", &a);
    cal(a);
}
