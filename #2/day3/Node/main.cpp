#include <iostream>
#include <stdio.h>

using namespace std;

int A[100];
int data[100][100];

int loc = 0;
int node;

void push(int i) {
    A[loc] = i;
    loc++;
}

int pop() {
    loc--;
    return A[loc];
}

void visit(int start, int endL) {
    if (start == endL) {
        //printf("END");

    } else {
        for (int i = 0; i < node; i++) {
            if (data[i][endL-1] == 1) {
                push(i+1);
                visit(start, i+1);
            }
        }
    }
}

int main()
{
    int line; scanf("%d %d", &node, &line);

    int start, endL; scanf("%d %d", &start, &endL);

    for (int i = 0; i < node; i++)
        for (int o = 0; o < node; o++)
        data[i][o] = 0;

    for (int i = 0; i < line; i++) {
        int a,b;
        scanf("%d %d", &a, &b);
        data[a-1][b-1] = 1;
    }

    printf("\n--Adjacent Matrix--\n");
    for (int i = 0; i < node; i++) {
        for (int o = 0; o < node; o++)
            printf("%d ",data[i][o]);
        printf("\n");
    }

    visit(start,endL);

    for (int i = 0; i < loc + 2; i++) {
        int a = pop();
        if (a != start && i == 0) {
            printf("NULL - IMPOSSIBLE");
            return 0;
        } else {
        printf("%d", a);
        printf("-");
        }
    }
    printf("%d", endL);
}
