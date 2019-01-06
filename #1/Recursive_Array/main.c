#include <stdio.h>
#include <stdlib.h>
int amount = 0;
int cal(int a[], int n) {
    if (a[n] > 100) {
        printf("%d ", a[n]);
        amount++;
    }
    return (n == 0 ? 0 : cal(a,n-1));
}

int main()
{
    int count = 9;
    int a[count];
    printf("Insert 9 numbers: ");
    for (int i = 0; i < count; i++) {
        scanf("%d", &a[i]);
    }
    cal(a,count-1);

    printf("\nThere're %d number", amount);
}
