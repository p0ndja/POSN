#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

using namespace std;

/*
6
0 3 1 6 0 0
3 0 5 0 3 0
1 5 0 5 6 4
6 0 5 0 0 2
0 3 6 0 0 6
0 0 4 2 6 0

6 10
1 2 3
1 3 1
1 4 6
2 3 5
2 5 3
3 4 5
3 5 6
3 6 4
4 6 2
5 6 6

6 5
2 0 1
5 3 2
1 0 3
4 1 3
5 2 4

*/

int edge[100][5];

int set[100];

int countt = 0, line, dot;
long long sum = 0;

int main() {
    scanf("%d %d", &dot, &line);

    for (int i = 0; i < line; i++) {
        int a,b,c; scanf("%d %d %d", &a, &b, &c);
        edge[i][0] = a; edge[i][1] = b; edge[i][2] = c;
        set[i] = i;
    }
    //for (int i = 0; i < line; i++) printf("%d,%d,%d ", edge[i][0], edge[i][1], edge[i][2]);

    for (int i = 0; i < line; i++) {
        for (int o = 0; o < line - 1; o++) {
            if (edge[o][2] > edge[o+1][2]) {
                int temp;
                temp = edge[o][2];
                edge[o][2] = edge[o+1][2];
                edge[o+1][2] = temp;

                for (int p = 0; p < 2; p++) {
                    temp = edge[o][p];
                    edge[o][p] = edge[o+1][p];
                    edge[o+1][p] = temp;
                }
            }
        }
    }
    //for (int i = 0; i < line; i++) printf("%d,%d,%d ", edge[i][0], edge[i][1], edge[i][2]);

    sum = edge[0][2];
    set[(edge[0][1])] = set[(edge[0][0])];

    int loc = 1;

    while(loc < dot) {
        /*printf("PATHED: ");
        for (int i = 0; i < dot; i++) printf("%d ", pathed[i]);
        printf("SET: ");
        for (int i = 0; i < dot; i++) printf("%d ", set[i]);
        printf("\n");*/

        int a = edge[loc][0];
        int b = edge[loc][1];
        if (set[a] == set[b]) {
                //printf("\nDUPLICATED\n");
                //It have the same connector
        } else {
            sum += edge[loc][2];
            for (int i = 0; i < dot; i++) {
                if (set[i] == set[a]) {
                    set[i] = set[b];
                //printf("SET %d->%d ", i, b);
                }
            }
        }
        loc++;
    }
    printf("%lld", sum);
    return 0;
}
/*
4 4
1 2 1
1 3 4
3 4 2
2 4 3
*/
