#include <bits/stdc++.h>
using namespace std;
int mod[10000];
int main(){
  int n,k,countt = 0; scanf("%d %d",&n,&k);
  for(int i = 0; i < n; i++){
    long long x; scanf("%lld",&x);
    if (mod[x%k] == 0) {
      mod[x%k] = 1;
      countt++;
    }
  }
  printf("%d\n",countt);
  for(int i = 0; i < k; i++) 
    if(mod[i] == 1)
      printf("%d\n",i);


  return 0;
}
