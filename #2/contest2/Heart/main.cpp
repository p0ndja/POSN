#include <bits/stdc++.h>

using namespace std;

int x;

void sharp(int a) {
    for (int b = 0; b < a; b++)
        printf("#");
}

void dot(int a) {
    for (int b = 0; b < a; b++)
        printf(".");
}

void low(int a, int d) {
    dot(d);
    sharp((2*a) + 1);
    dot(d);
    printf("\n");
    if (a >= 1) low(a-1, d+1);
}

void head(int a, int d, int mod) {
    dot(d);
    sharp(a);
    sharp(mod);
    sharp(a);
    dot(d);
    dot(1);
    dot(d);
    sharp(a);
    sharp(mod);
    sharp(a);
    dot(d);
    printf("\n");

    if ((a*2) + mod < x) {
        head(a+1, d-1, mod);
    } else {
        for (int i = 0; i < (x/2) - 2; i++) {
            sharp(x);
            sharp(1);
            sharp(x);
            printf("\n");
        }
        low(x, 0);
    }
}

int main()
{
    int a;
    while(cin >> a) {
        x = a;
        if (a%2 == 0)
            head(1, (a/2) - 1, 0);
        else
            head(1, (a/2) - 1, 1);
    }
}
