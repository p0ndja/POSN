#include <stdio.h>
#include <stdlib.h>

/*
    How to do this!?
    Try to solve it with 'Square' and 'Recursive'
*/

void dash(int i) { //PRINT '-'
    for (int o = 0; o < i; o++)
        printf("-");
}

void star(int i) { //PRINT '*'
    for (int o = 0; o < i; o++)
        printf("*");
}

void PJ(int n,int m) {
	if (m==1 || m==n) {
        star(n); //TOP & BOTTOM
	} else if (m == 2 || m == n-1){ //BELOW TOP & ABOVE BOTTOM
	    star(1);
	    dash(n-2);
	    star(1);
	} else { //Another Case It's will create "*-" at front & "-*" black
        star(1);
        dash(1);
        PJ(n-4, m-2); //Use Recursive to make a small box inside
        dash(1);
        star(1);
    }
}
int main()
{
    int input;
    scanf("%d", &input);

    for (int i = 1; i <=input; i++) {
        PJ(input, i);
        printf("\n");
    }
}
