#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase; scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++) {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", (-b/(2*a)));
    }
}
