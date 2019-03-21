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
*/

int adjacent[100][100];

int edge[100][2];
int edgeCount[100];
int loc = 0;

int pathed[100];
int countt = 0;

int sum = 0;

void checkLink(int a, int b) {
    if (a > b) {//Skip
    } else {
        if (adjacent[a][b] >= 1) {//it's linked
            edge[loc][0] = a;
            edge[loc][1] = b;
            edgeCount[loc] = adjacent[a][b];
            loc++;
        }
    }
}

int main() {
    printf("Insert Adjacent Matrix Size: ");
    int v; scanf("%d", &v);
    printf("Insert Adjacent Matrix: \n");
    for (int i = 0; i < v; i++)
        for (int o = 0; o < v; o++)
        scanf("%d", &adjacent[i][o]);

    for (int i = 0; i < v; i++) {
        for (int o = 0; o < v; o++) {
            checkLink(i,o);
        }
    } //Convert to edge matrix

    for (int i = 0; i < loc; i++) {
        for (int o = 0; o < loc - 1; o++) {
            if (edgeCount[o] > edgeCount[o+1]) {
                int temp;
                temp = edgeCount[o];
                edgeCount[o] = edgeCount[o+1];
                edgeCount[o+1] = temp;

                for (int p = 0; p < 2; p++) {
                    temp = edge[o][p];
                    edge[o][p] = edge[o+1][p];
                    edge[o+1][p] = temp;
                }
            }
        }
    }
    pathed[0] = edge[0][0];
    pathed[1] = edge[0][1];
    countt = 2;

    while(1) {
        if (countt == v) {
            printf("Minimum cost = %d", sum+edgeCount[0]);
            return 0;
        }

        for (int i = 1; i < loc; i++) {
            for (int o = 0; o < countt; o++) {
                //printf(" %d ", pathed[o]);
                if(pathed[o] == edge[i][0]) {
                    for (int p = 0; p < countt; p++) {
                        //printf("\n%d vs %d\n",edge[i][1], pathed[p]);
                        if(edge[i][1] == pathed[p]) goto END;
                        else {
                        pathed[countt] = edge[i][1];
                        sum += edgeCount[i];
                        countt++;
                        //printf("**%d ", edge[i][1]);
                        goto NEXT;
                        }
                    }
                }
                END:;
            }
        }
        NEXT:;
    }
}
