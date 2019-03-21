#include <stdio.h>

int A[100];

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
    int c;
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        int input;
        scanf("%d", &input);
        push(input);
    }
    int count = 0;
    int max = 0;
    for (int i = 0; i < c; i++) {
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
