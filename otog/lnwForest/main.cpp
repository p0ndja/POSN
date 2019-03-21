#include <iostream>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

unsigned int A[1000005];
int loc = 0;

void push(int i) {
    A[loc] = i;
    loc++;
}

int pop() {
    loc--;
    return A[loc];
}

int main() {
    unsigned int input;
    while(scanf("%d", &input) != EOF) {
        if (input == -1) break;
        push(input);
    }

    int count = 0;
    int max = 0;
    int ccc = loc;
    for (int i = 0; i < ccc; i++) {
        int a = pop(); //pop out and delete
        //printf(" POP %d\n", a);
        if (max - a < 0) { //It's taller than before it.
            count++;
            max = a;
        } else {
            //It's shorter than before it.
        }
    }

    printf("%d", count);
}

