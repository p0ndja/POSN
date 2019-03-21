#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    scanf("%d", &count);
    int data[count];
    for (int i = 0; i < count; i++) scanf("%d", &data[i]);

    for (int i = 0; i < count; i++) for (int i = 0; i < count; i++)
        if (data[i] > data[i+1]) {
            int temp = data[i];
            data[i] = data[i+1];
            data[i+1] = temp;
        }

    for (int i = 0; i < count; i++) printf("%d ", data[i]);
}
