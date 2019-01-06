#include <stdio.h>
#include <stdlib.h>

void loopMultiple(int i, int b) {
    if (i == 12)
        printf("%d x %d = %d\n", i, b, i*b);
    else {
        printf("%d x %d = %d\n", i, b, i*b);
        loopMultiple(i+1,b);
    }
}

void cal(int start, int end) {
    printf("\n\n************* Multiple of %d *************\n", start);
    if (start == end) {
        loopMultiple(1,start);
    } else {
        loopMultiple(1,start);
        cal(start+1, end);
    }
}

int main()
{
    int start,end;
    scanf("%d %d", &start, &end);
    cal(start,end);
}
