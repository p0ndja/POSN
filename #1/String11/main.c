#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int e;
    scanf("%d", &e);

    int stack[e];

    for (int i = 0; i < e; i++) {
        scanf("%d", &stack[i]);
    }

    int op;
    scanf("%d", &op);

    if (op > 0) {
        for (int i = 0; i < e; i++) {
            printf("%d ", op + stack[i]);
        }
    } else {
        for (int i = e - 1; i >= 0; i--) {
            printf("%d ", op + stack[i]);
        }
    }
}
