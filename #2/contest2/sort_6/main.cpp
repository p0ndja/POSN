#include <bits/stdc++.h>
using namespace std;
int data[500005][2];
static int compareFunction(const void* x, const void* y) {
    int* a = (int*) x;
    int* b = (int*) y;
    if (a[0] == b[0]) //X is Same, Sort by Y
        return b[1] - a[1];
    else //X is not Same
        return a[0] - b[0];
}
int main()
{
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d %d", &data[i][0], &data[i][1]);

    qsort(data, n, sizeof(int)*2, compareFunction);

    for (int i = 0; i < n; i++) printf("%d %d\n", data[i][0], data[i][1]);
    return 0;
}
