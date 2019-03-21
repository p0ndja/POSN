#include <stdio.h>
#include <stdlib.h>

main()
{
    int n;
    printf("Please insert score: ");
    scanf("%d", &n);
    printf("Grade ");
    if (n > 100) {
        printf("ERROR - Why student can have score more than limit!?");
    } else if (n >= 80) {
        printf("4");
    } else if (n >= 75) {
        printf("3.5");
    } else if (n >= 70) {
        printf("3");
    } else if (n >= 65) {
        printf("2.5");
    } else if (n >= 60) {
        printf("2");
    } else if (n >= 55) {
        printf("1.5");
    } else if (n >= 50) {
        printf("1");
    } else {
        printf("0");
    }
}
