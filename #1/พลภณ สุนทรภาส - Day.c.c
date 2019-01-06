#include <stdio.h>
#include <stdlib.h>

main()
{
    int day;
    printf("Please insert number of day: ");
    scanf("%d", &day);
    switch(day) {
    case 1:
        printf("Sun");
        break;
    case 2:
        printf("Mon");
        break;
    case 3:
        printf("Tue");
        break;
    case 4:
        printf("Wed");
        break;
    case 5:
        printf("Thu");
        break;
    case 6:
        printf("Fri");
        break;
    case 7:
        printf("Sat");
        break;
    default:
        printf("You enter the number that not in range of [1,7]");
    }
}
