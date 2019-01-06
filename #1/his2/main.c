#include <stdio.h>
#include <stdlib.h>
void star(int i) {
    for (int o = 0; o < i; o++)
        printf("*");
}
int main()
{
    int size;
    printf("Please insert amount of number: "); scanf("%d", &size);
    printf("\nEnter %d number\n", size);

    int s[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &s[i]);
    }
    printf("\nHistogram: \n");
    for (int i = 0; i <size; i++) {
        printf("%d", s[i]);
        star(s[i]);
        printf("\n");
    }
}
