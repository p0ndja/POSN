#include <iostream>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

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

int reflect[100][100];

int loc = 0;

int e = 0;

void checkLink(int a, int b) {
    if (a > b) {//Skip
    } else {
        if (adjacent[a][b] >= 1) {//it's linked
            edge[loc][0] = a;
            edge[loc][1] = b;
            edgeCount[loc] = adjacent[a][b];
            loc++;

            reflect[a][e] = 1;
            reflect[b][e] = 1;
            e++;
        }
    }
}

int main()
{
    int v; scanf("%d", &v); //Insert all node
    for (int i = 0; i < v; i++) {
        for (int o = 0; o < v; o++) {
            scanf("%d", &adjacent[i][o]); //Insert Adjacent Matrix
        }
    }

    for (int i = 0; i < v; i++) {
        for (int o = 0; o < v; o++) {
            checkLink(i,o);
        }
    }

    printf("====Edge Matrix====\n");
    for (int i = 0; i < loc; i++)
        printf("|%d %d| (weight=%d)\n", edge[i][0] + 1, edge[i][1] + 1, edgeCount[i]);

    printf("====Reflection Matrix====\n");
    for (int i = 0; i < v; i++) {
        for (int o = 0; o < e; o++) {
            printf("%d ", reflect[i][o]);
        }
        printf("\n");
    }
}
