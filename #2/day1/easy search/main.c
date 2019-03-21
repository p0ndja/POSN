#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    scanf("%d", &count); int data[count];

    for (int i = 0; i < count; i++) scanf("%d", &data[i]);

    int checker; scanf("%d", &checker);

    int index = -1;
    for (int i = 0; i < count; i++) if (data[i] == checker) index = i;

    if (index != -1) printf("Y : %d", index);
    else printf("N");

    return 0;
}
