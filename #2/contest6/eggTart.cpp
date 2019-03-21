#include<bits/stdc++.h>
using namespace std;
long long energy[200002],multiply[200002];

int main() {
  int n; scanf("%d", &n); for(int i = 0; i < n; i++) scanf("%lld", &energy[i]);
  for(int o = n; o > 0; o--) { //Get from Top -> Bottom
    int a = 1;
    while(o - a >= 0) {
      multiply[o - a] = max(multiply[o-a], a * energy[o-a] + multiply[o]); //Dynamic :P
      a = a*2; //Pow-Like
    }
  }
  printf("%lld", multiply[0]);
  return 0;
}
