#include <stdio.h>
#include <stdlib.h>

float max,min,mid;

int cal(float a, float b, float c) {

    if (a > b) {
        max = a;
        min = b;
    } else {
        min = a;
        max = b;
    }

    if (max > c) {
        if (max == a) {
            if (c > b) {
                mid = c;
                min = b;
            } else {
                mid = b;
                min = c;
            }
        } else if (max == b) {
            if (c > a) {
                mid = c;
                min = a;
            } else {
                mid = a;
                min = c;
            }
        }
    } else {
        max = c;
        if (a > b) {
            mid = a;
            min = b;
        } else {
            min = a;
            mid = b;
        }
    }
}

int main()
{
    float a,b,c;
    int m;
    scanf("%d", &m);
    scanf("%g", &a);
    scanf("%g", &b);
    scanf("%g", &c);

    cal(a,b,c);

    if (m == 1) {
        printf("%g", ((a+b+c)/3));
        return 0;
    } else if (m == 2) {
        printf("%g", mid);
    } else if (m == 3) {
        printf("%g", max);
    }
}
