#include <bits/stdc++.h>
using namespace std;

int length[1000005];
int digit[1000005];

int main() {
  int n; scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int in; scanf("%d", &in); digit[in] = i;
  }
  for (int i = 0; i < n; i++) {
    int in; scanf("%d", &in);
    int o = i - digit[in]; if (o < 0) o+=n; //Make it in bound
    length[o]++;
  }
  int aMax = 0, aIndex = 0;
  for (int i = 0; i < n; i++) {
    if (length[i] > aMax) {
      aMax = length[i]; aIndex = i;
    }
  }
  printf("%d %d\n", aMax, aIndex);
  return 0;
  /*

  int acMax = 0, moved = 0;
  for (int i = 0; i < n; i++) {
    int accuracy = 0;
    auto ens = ans.begin();
    for (auto e = vec.begin(); e != vec.end(); e++) {
      if (*e == *ens) {
        accuracy++;
      }
      ens++;
    }
    if (accuracy > acMax) {
      acMax = accuracy;
      moved = i;
    }
    int front = vec.front();
    vec.erase(vec.begin());
    vec.push_back(front);
  }*/
  //printf("%d %d\n", acMax, moved);
}
