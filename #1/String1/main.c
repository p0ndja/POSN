#include <stdio.h>
#include <stdlib.h>

int n1000,n500,n100,n50,n20,c10,c5,c1;

void cal(int i) {

    int thousand = i/1000;
    int fivehundred = (i%1000)/500;
    int onehundred = ((i%1000)%500)/100;
    int fifty = (((i%1000)%500)%100)/50;
    int twenty = ((((i%1000)%500)%100)%50)/20;
    int ten = (((((i%1000)%500)%100)%50)%20)/10;
    int five = ((((((i%1000)%500)%100)%50)%20)%10)/5;
    int one = ((((((i%1000)%500)%100)%50)%20)%10)%5;

    if (thousand > n1000) {
        for (int o = 0; o < (thousand - n1000); o++)
            fivehundred += 2;
        thousand = n1000;
    }

    if (fivehundred > n500) {
        for (int o = 0; o < (fivehundred - n500); o++)
            onehundred += 5;
        fivehundred = n500;
    }

    if (onehundred > n100) {
        for (int o = 0; o < (onehundred - n100); o++)
            fifty += 2;
        onehundred = n100;
    }

    if (fifty > n50) {
        for (int o = 0; o < (fifty - n50); o++) {
            twenty += 2;
            ten += 1;
        }
        fifty = n50;
    }

    if (twenty > n20) {
        for (int o = 0; o < (twenty - n20); o++)
            ten += 2;
        twenty = n20;
    }

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
    printf("Thousand Bank Note = %d\n", thousand);
    printf("Five hundred Bank Note = %d\n", fivehundred);
    printf("One hundred Bank Note = %d\n", onehundred);
    printf("Fifty Bank Note = %d\n", fifty);
    printf("Twenty Bank Note = %d\n", twenty);
    printf("Ten Baht Coin = %d\n", ten);
    printf("Five Baht Coin = %d\n", five);
    printf("One Baht Coin = %d\n", one);
    }
}
int main()
{
    int a;

    printf("Please insert amount of 1000 Baht bank note: ");
    scanf("%d", &n1000);
    printf("Please insert amount of 500 Baht bank note: ");
    scanf("%d", &n500);
    printf("Please insert amount of 100 Baht bank note: ");
    scanf("%d", &n100);
    printf("Please insert amount of 50 Baht bank note: ");
    scanf("%d", &n50);
    printf("Please insert amount of 20 Baht bank note: ");
    scanf("%d", &n20);
    printf("Please insert amount of 10 Baht coin: ");
    scanf("%d", &c10);
    printf("Please insert amount of 5 Baht coin: ");
    scanf("%d", &c5);
    printf("Please insert amount of 1 Baht coin: ");
    scanf("%d", &c1);

    printf("Please insert money: ");
    scanf("%d", &a);
    cal(a);
    return 0;
}
