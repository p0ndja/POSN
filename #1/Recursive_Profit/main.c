#include <stdio.h>
#include <stdlib.h>

void cal(float baht, int year, int end) {
    if (year == end) {
        printf("Year %d = %.2f BAHT\n", year, baht);
    } else {
        printf("Year %d = %.2f BAHT\n", year, baht);
        cal(baht * 1.05, year+1, end);
    }

}

int main()
{
    int end;
    float baht = 500000;
    cal(baht, 0, 3);
    printf("\nInsert year to find: ");
    scanf("%d", &end);
    cal(baht, 0, end);
    //scanf("%d", &baht);
}
