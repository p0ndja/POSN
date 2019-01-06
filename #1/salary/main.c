#include <stdio.h>
#include <stdlib.h>

float checkSalary(float a, float avg) {
    if (a > avg) {
        return a*1.05;
    } else if (a < avg) {
        return a*1.1;
    } else {
        return a*1.07;
    }
}

int main()
{
    float a,b,c;
    scanf("%g", &a);
    scanf("%g", &b);
    scanf("%g", &c);

    float avg = (a+b+c)/3;

    printf("%g\n", checkSalary(a, avg));
    printf("%g\n", checkSalary(b, avg));
    printf("%g\n", checkSalary(c, avg));
}
