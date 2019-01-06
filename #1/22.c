#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=======================================\n     FIND NUMBER THAT END WITH '9'\n=======================================\n");
    int start, end, count;
    start = 1;
    end = 1000;
    count = 0;
    printf("Start at %d\n", start);
    printf("End at %d\n\n", end);
    for(int i = start; i <= end; i++) {
        if ((i+1)%10 == 0) {
            printf("%d, ", i);
            count++;
        }
    }
    printf("\n\nTotal %d number\n", count);
    creditTxt();

}

void creditTxt() {
    printf("\nCoded by Palapon Soontornpas\n");
}
