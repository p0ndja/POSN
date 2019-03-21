#include <stdio.h>
#include <stdlib.h>


//ID 228 : FiMul
int F(int n) {
    if (n == 1) {
        return 7;
    } else if (n == 2 || n == 3) {
        return -2;
    } else {
        return F(n-2)*3 + F(n-3)*4;
    }
}

int main()
{
    int input;
    scanf("%d", &input);
    printf("%d", F(input));
}
