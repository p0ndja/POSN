#include <bits/stdc++.h>

using namespace std;

static int compareFunction(const void* x, const void* y) {
    int* a = (int*) x;
    int* b = (int*) y;
    if (a[0] == b[0]) //X is Same, Sort by Y
        return a[1] - b[1];
    else //X is not Same
        return a[0] - b[0];
}

int main()
{
    int x,y; scanf("%d %d", &x, &y);
    int data[100000][2];
    for (int i = 0; i < y; i++) scanf("%d %d", &data[i][0], &data[i][1]);

    qsort(data, y, sizeof(int)*2, compareFunction);

    int i = 0;
    for (int o = 1; o <= x; o++) {
        int loc = 0;
        int num_before = -1;
        for (; i < y; i++) {
            //printf("%d ", i);
            if ((data[i][0] == o) && (data[i][1] != num_before)) {
                loc++;
                num_before = data[i][1];
            } else if (data[i][0] != o) {
                int a = i;
                i = a;
                break;
            }
        }

        printf("%d %d\n", o, loc);
    }

}
