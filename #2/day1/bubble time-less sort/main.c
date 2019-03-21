#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    scanf("%d", &count);
    int data[count];
    for (int i = 0; i < count; i++) scanf("%d", &data[i]);

    for (int i = 0; i < count - 2; i++)
        for (int o = 0; o < count - i; o++)
        if (data[o] > data[o+1]) {
            int temp = data[o];
            data[o] = data[o+1];
            data[o+1] = temp;
        }

    for (int i = 0; i < count; i++) printf("%d ", data[i]);
}
