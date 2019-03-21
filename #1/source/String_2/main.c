#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int count;
    scanf("%d", &count);

    if (count <= 1) {
        return 0;
    }

    int data[count];

    for (int i = 0; i < count; i++) {
        scanf("%d" , &data[i]);
    }
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += data[i];
    }

    float avg = (float) sum / (float) count;

    printf("%.2f", avg);

    float sum_x = 0;
    for (int i = 0; i < count; i++) {
        sum_x += pow(data[i],2);
    }

    float sum_x2 = pow(sum,2);

    float result = ((count*sum_x) - sum_x2) / (count*(count-1));

    printf(" %.2f", result);
    return 0;
}
