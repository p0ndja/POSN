#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[] = {1,12,123,1234,12345};

    for (int i = 5; i > 0; i--) {
        for (int o = i; o > 0; o --) {
            printf(" ");
        }
        printf("%d  %d", num[5-i], num[5-i]);
        printf("\n");
    }
}
