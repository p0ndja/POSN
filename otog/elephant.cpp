#include <bits/stdc++.h>
using namespace std;
int banana[100001], storage[100001];
int main() {
  int n; scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", &banana[i]);
  for (int i = 2; i < n+3; i++) {
    if (i+1 < n+3) storage[i+1] = max(storage[i], storage[i+1]);
    if (i+3 < n+3) storage[i+3] = max(storage[i+3], banana[i] + storage[i]);
  }
  printf("%d\n", storage[n+2]);
  return 0;
}
