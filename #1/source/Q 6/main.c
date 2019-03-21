#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,size,max = 0;
    scanf("%d %d", &count, &size);
    int a[count];

    for (int i = 0; i < count; i++) //Add int to Array
        scanf("%d", &a[i]);

    for (int i = size; i < count - size; i++) {
        int sum = 0;
        for (int j = i-size; j < i + size + 1; j++)
            sum += a[j];
        if (sum > max)
            max = sum;
    }
    printf("%d", max); //Print max that possible
}
