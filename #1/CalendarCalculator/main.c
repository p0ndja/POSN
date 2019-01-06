#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day,year;
    char month[20], a, b, c;

    printf("Insert day: ");
    scanf("%d", &day);
    printf("Insert month: ");
    scanf("%s", &month);
    printf("Insert year: ");
    scanf("%d", &year);

    printf("Return: %s (%.3s) %d, %d.", month, month, day, year);
    creditTxt();
}
void creditTxt() {
    printf("\n\nCoded by æ≈¿≥  ÿπ∑√¿“ \n");
}
