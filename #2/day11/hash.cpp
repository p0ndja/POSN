#include <bits/stdc++.h>

typedef struct {
  char name[11];
  int height;
  int weight;
} person;

int my_hash(char *a) {
  int sum = 0;
  for (int i = 0; a[i] != '\0'; i++) {
    sum += a[i]*10*(i+1);
  }
  return sum%(100007);
}

person database[100007];

int main() {
  char d[11], w, h;
  int n, m;
  scanf("%d %d", &n, &m);
  while(n--) {
    scanf("%s %d %d", d, &w, &h);
    int index = my_hash(d);
    database[index].height = h;
    database[index].weight = w;
  }
  while(m--) {
    scanf("%s", d);
    int index = my_hash(d);
    printf("Hash %d have w=%d, h=%d", index, database[index].weight, database[index].height);
  }
}
