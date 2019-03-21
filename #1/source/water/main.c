#include <stdio.h>
#include <stdlib.h>

float thb = 0;
float cal(float i) {
    if (i <= 50) {
        thb += 20;
    } else if (i < 60) {
        thb += i*5.25;
    } else if (i < 70) {
        thb += i*6.25;
    } else if (i < 80) {
        thb += i*7.25;
    } else if (i < 90) {
        thb += i*8.25;
    } else if (i < 100) {
        thb += i*9.25;
    } else {
        thb += i*10.25;
    }

    printf("%.2f", thb);

}

main()
{
    float usage;
    printf("\nPlease insert amount of water used: ");
    scanf("%f", &usage);
    printf("\nKalakate need to paid "); cal(usage); printf(" Baht.");
    if (usage >= 100) {
        printf("\n  Which is OVERLOAD!");
    } else {
        printf("\n  Which is normal.");
    }
    printf("\n");
}
