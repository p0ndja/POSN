#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    const int *aa = (const int*) a;
    const int *bb = (const int*) b;
    return *aa - *bb;
}


int main()
{
    int o = 0;
    int count; scanf("%d", &count);
    int data[count];

    int odd[count];
    int order[count];

    for (int i = 0; i < count; i++) {
        scanf("%d", &data[i]);
        if (data[i]%2==0) {
        } else {
            odd[o] = data[i];
            order[o] = i;
            o++;
        }
    }

    qsort(odd, o, sizeof(odd[0]), compare);
    for (int i = 0; i < o; i++) data[order[i]] = odd[i];

    for (int i = 0; i < count; i++)
        printf("%d ", data[i]);
}
