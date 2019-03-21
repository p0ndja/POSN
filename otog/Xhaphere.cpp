#include <bits/stdc++.h>

using namespace std;

int node[10001][2];
int rec[10001];
int one = -1;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; scanf("%d", &n);
  for (int i = 1; i < n; i++) {
    int a,b; scanf("%d %d", &a, &b);
    node[a][rec[a]] = b; rec[a]++;
    node[b][rec[b]] = a; rec[b]++;
  }
  for (int i = 0; i < n; i++) {
    if(rec[i] == 1) {
      one = i;
      break;
    }
  }
  int pre = one;
  one = node[one][0];
  for (int i = 1; i < n/2; i++) {
    for (int o = 0; o < 2; o++) {
      if (node[one][o] != pre) {
        pre = one;
        one = node[one][o];
        break;
      }
    }
  }
  printf("%d\n", one);
}
