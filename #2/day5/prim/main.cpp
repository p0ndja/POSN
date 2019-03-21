#include <iostream>
#include <stdio.h>
#include<conio.h>

using namespace std;

int edge[100][5], pathed[100];

int countt = 0, sum = 0, line, dot, loc = 0;

int main() {
    scanf("%d %d", &dot, &line);

    for (int i = 0; i < line; i++) {
        int a,b,c; scanf("%d %d %d", &a, &b, &c);
        edge[i][0] = a - 1; edge[i][1] = b - 1; edge[i][2] = c;
    }
    //for (int i = 0; i < line; i++) printf("%d,%d,%d ", edge[i][0], edge[i][1], edge[i][2]);
    //printf("\n");

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

    pathed[0] = edge[0][0];
    pathed[1] = edge[0][1];
    loc+=2;
    sum+=edge[0][2];
    while(1) {
        if(loc == dot) {
            printf("%d", sum);
            return 0;
        }

        for (int i = 1; i < line; i++) {
            for (int o = 0; o < loc; o++) {
                if(pathed[o] == edge[i][0]) {
                    for (int p = 0; p < loc; p++) {
                        printf("NODED:");for(int NOD=0;NOD<loc;NOD++)printf("%d ",pathed[NOD]);printf("\n");
                        getch();
                        if(pathed[i] == edge[i][1]) {
                            goto findNewSah;
                        }
                        pathed[loc] = edge[i][1];
                        sum += edge[i][2];
                        loc++;
                        goto nextInt;
                    }
                }
                findNewSah:;
            }
        }
        nextInt:;
    }
}
