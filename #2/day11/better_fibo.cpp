#include <bits/stdc++.h>

using namespace std;

long long F[100];
long long better_fibo(int n) {
    if (n == 0 || n == 1)
        return n;
    if (F[n] == 0)
        F[n] = better_fibo(n-1) + better_fibo(n-2);
    return F[n];
}

long long fibo(int n) {
    if (n == 0 || n == 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}

long long even_better_fibo(int n) {
    F[0] = 0; F[1] = 1;
    for(int i=2; i<=n; i++)
        F[i] = F[i-1]+F[i-2];
    return F[n];
}
