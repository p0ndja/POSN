#include <stdio.h>
#include <stdlib.h>

void cal(int start, int end) {
    int sum = 0;
    for (int m = start; m <= end;m++) {
        if (m%2==0)
            sum += m;
    }
    printf("Summary of even number in range [%d,%d] is %d", start, end, sum);
}

int main()
{
    int i, start = 1;
    for (int o = 0; o <= 1; o++) {
    printf("\nPlease Enter Number: ");
    scanf("%d", &i);
    cal(start, i);
    }
}
