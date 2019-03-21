#include <bits/stdc++.h>
#define min(a,b) a < b ? a : b
using namespace std;

/*
int n,m=0,c=0;
int data[1000001];
void re(int start) {
  if (start >= n-1) {
    return;
  } else {
    if (data[start] + m > n-1) { //Too much
      c++;
      //printf("%d->%d\n", start, start+1);
      m++;
      re(start + 1);
    } else {
      if ((data[start] < data[start+1]) && (data[start+1] + m < n)) {
        c++;
        //printf("%d->%d\n", start, start+1);
        m++;
        re(start + 1);
      } else {
        c++;
        //printf("%d->%d\n", m, m+data[start]);
        m += data[start];
        re(m);
      }
    }
  }
}
*/
int a[1000001];
int p[1000001];
int main() {
  int n; scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &p[i]);
    a[i] = INT_MAX;
  }
  a[0] = 0;
  for (int i = 0; i < n; i++) { //Dynamic :P, Thanks to Peeraphol
    if (i + p[i] < n)
      a[i+p[i]] = min(a[i] + 1, a[i+p[i]]);
    if(i + 1 < n)
      a[i+1] = min(a[i]+1,a[i+1]);
  }
  printf("%d", a[n-1]);
}

//REF: https://www.youtube.com/watch?v=jJ7fw7u97mc
