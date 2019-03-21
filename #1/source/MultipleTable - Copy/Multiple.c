#include <stdio.h>
#include <stdlib.h>

main()
{
    int start;
    printf("Please enter the number that you want to see the Multiple Table: ");
    scanf("%d", &start);
    printf("\n\n========================================\n            Multiple of %d\n========================================\n", start);
        for (int o = 1; o <= 12; o++) {
            printf("%d * %d = %d\n", start, o, start*o);
        }
    creditTxt();

}
void creditTxt() {
    printf("\nCoded by Palapon Soontornpas\n");
}
