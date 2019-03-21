#include <stdio.h>
#include <stdlib.h>

int max = 0;

void calMax(int i) {
    if (i > max)
        max = i;
}
int main()
{
    int size;
    scanf("%d", &size);

    int data[size];

    for (int i = 0; i < size; i++) {
        int input;
        scanf("%d", &input);
        calMax(input);
        data[i] = input;
    }

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (data[i] == max) {
            count++;
        }
    }

    printf("%d", count);
}
