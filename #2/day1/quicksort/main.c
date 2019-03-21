#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b) {
    const int *aa = (const int*) a;
    const int *bb = (const int*) b;
    return *aa - *bb;
}

int main()
{
    int count;
    scanf("%d", &count);
    int data[count];
    for (int i = 0; i < count; i++){
        scanf("%d", &data[i]);
        printf("--%d--", i);
    }

    clock_t begin = clock();

    //Quick sort
    qsort(data, count, sizeof(data[0]), compare);
    for (int i = 0; i < count; i++)
        printf("%d ", data[i]);

    clock_t end = clock();
    printf("%.5f", ((double) end - begin)/CLOCKS_PER_SEC);
}
