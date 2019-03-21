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
*/

int edge[100][5], pathed[100];

int countt = 0, sum = 0, line, dot;

int main() {
    scanf("%d %d", &dot, &line);
    for (int i = 0 ; i < dot; i++)
        pathed[i] = 0;

    for (int i = 0; i < line; i++) {
        int a,b,c; scanf("%d %d %d", &a, &b, &c);
        edge[i][0] = a; edge[i][1] = b; edge[i][2] = c;
    }
    //for (int i = 0; i < line; i++) printf("%d,%d,%d ", edge[i][0], edge[i][1], edge[i][2]);
    //printf("\n");

    for (int i = 0; i < line; i++) {
        for (int o = 0; o < line; o++) {
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

    pathed[edge[0][0]] = 1;
    pathed[edge[0][1]] = 1;
    sum = edge[0][2];

    int loc = 1;

    while(1) {
        if (loc == dot - 1) {
            printf("%d", sum);
            return 0;
        }
        //printf("PATHED: ");
        //for (int i = 0; i < dot; i++) printf("%d ", pathed[i]);
        //printf("\n");

        int a = edge[loc][0];
        int b = edge[loc][1];

        if (pathed[a] == 0 && pathed[b] == 0) {
            pathed[a] = 1;
            pathed[b] = 1;
            sum += edge[loc][2];
        } else if (pathed[a] == 1 && pathed[b] == 0) {
            pathed[b] = 1;
            sum += edge[loc][2];
        } else if (pathed[a] == 0 && pathed[b] == 1) {
            pathed[a] = 1;
            sum += edge[loc][2];
        } else {
            //printf("\nDUPLICATED\n");
        }
        loc++;
    }
    return 0;
}
