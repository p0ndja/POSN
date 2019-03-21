#include<bits/stdc++.h>
using namespace std;
int lcs(char *X, char *Y, int m, int n ) {
  int L[m+1][n+1];
  for (int i=0; i<=m; i++) {
    for (int o=0; o<=n; o++) {
      if (i == 0 || o == 0) L[i][o] = 0;
      else if (X[i-1] == Y[o-1]) L[i][o] = L[i-1][o-1] + 1;
      else L[i][o] = max(L[i-1][o], L[i][o-1]);
    }
  }
  return L[m][n];
}

int main() {
  char X[500],Y[500]; scanf("%s", X); scanf("%s", Y);
  printf("%d\n", lcs(X, Y, strlen(X), strlen(Y)));
  return 0;
}
