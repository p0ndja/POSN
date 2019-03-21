#include <stdio.h>
#include <stdlib.h>

int compareup(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

int comparedown(const void * a, const void * b) {
    return (*(int*)b - *(int*)a);
}

int main()
{
    int count; scanf("%d", &count);
    int data[count],odd[count],even[count];
    int oc = 0, ec = 0;
    for (int i = 0; i < count; i++) scanf("%d", &data[i]);
    for (int i = 0; i < count; i++) {
        if (data[i]%2==0){
            even[ec] = data[i];
            ec++;
        } else {
            odd[oc] = data[i];
            oc++;
        }
    }
    qsort(even, ec, sizeof(int), compareup);
    qsort(odd, oc, sizeof(int), comparedown);
    for (int i = 0; i < ec; i++) printf("%d ", even[i]);
    for (int i = 0; i < oc; i++) printf("%d ", odd[i]);

    return 0;
}
