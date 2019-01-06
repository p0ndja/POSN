#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n      ================================================\n          FIND NUMBER THAT SUMMARY ALL DIGIT IS '5'\n      ================================================\n\n");
    int start,end,count;

    start = 50;
    count = 0;
    end = 500;

    printf("        Start at %d\n", start);
    printf("        End at %d\n\n", end);

    printf("\n          There're\n              ");
    for(int o = start; o <= end; o++) {
            int sum = 0;

        for(int i=0;i<=2;i++) {
            int a[3];
            a[i] = numbertodigit(i, o);
            sum = sum + a[i];
        }

        if (sum == 5) {
            printf("%d, ", o);
            count++;
        }

    }
    printf("\n");
    printf("\n          Total %d number\n", count);
    creditTxt();
    return 0;
}

void creditTxt() {
    printf("\nCoded by Palapon Soontornpas\n");
}
int numbertodigit(int order, int input){
    while(order--)
        input/=10;
    return input%10;
}
