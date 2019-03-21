#include <bits/stdc++.h>
using namespace std;

int n,m;
int arra[6];

vector<int> temp(15);
vector<vector<int>> v;

void recursive(int w, int s, int t) {
  if (w > m) return;
  temp[w-1] = arra[t];
  if (s == n) {
    temp.resize(w);
    v.push_back(temp);
    temp.resize(15);
  }
  for (int i = 0; i < 6; i++) {
    if (s + arra[i] > n) continue;
    recursive(w + 1, s + arra[i], i);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  scanf("%d%d",&n,&m);
  for (int i = 0; i < 6; i++) scanf("%d",&arra[i]);
  for (int i = 0; i < 6; i++) recursive(1,arra[i],i);
  int s = v.size();
  printf("%d\nE\n", s);
  for (auto e : v) {
    printf("%d ", e.size());
    for(auto f : e) printf("%d ", f);
    printf("\nE\n");
  }
}
