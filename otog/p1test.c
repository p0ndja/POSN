#include <stdio.h>

int cmp(const int * a, const int * b) {
  return *(int*) a - *(int*) b;
}

int main() {
  int n; scanf("%d", &n);
  int data[n]; for (int i = 0; i < n; i++) scanf("%d", &data[i]);
  qsort(data, n, sizeof(int), cmp);
  for (int i = 0; i < n; i++) printf("%d ", data[i]);
}
