#include <iostream>
#include <stdlib.h>

using namespace std;

int cmp(const void *a, const void *b) {
    const int *d = (const int *)a;
    const int *e = (const int *)b;
    if (d%2==0 && e%2==0) return 0;
    if (d%2==0 && e%2==1) return +1;
    if (d%2==1 && e%2==0) return -1;
}

int main()
{
    int count, data[count];
    cin >> count;
    for (int i = 0; i < count; i++) cin >> data[i];
    qsort(data, count, sizeof(int), cmp);
    for(int i = 0;i< count;i++)cout << data[i] << " ";
    return 0;
}
