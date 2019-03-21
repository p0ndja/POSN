#include <stdio.h>
#include <stdlib.h>

int cal(int min) {
    int thb = 0;

    int h = min/60;
    int m = min%60;

    if (h >= 1) {
        thb += 30;
        h--;
    }

    if (m>15) {
        h++;
    }

    thb += (h*10);

    printf("\nYou need to paid: %d Baht\n", thb);

}
int main()
{
    int min;
    printf("\nPlease insert time length *in minute*: ");
    scanf("%d", &min);
    cal(min);

}
