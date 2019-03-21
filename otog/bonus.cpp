#include <bits/stdc++.h>

int n,c;
bool possible;
int price[1000001];

int maxAns = 0;

void binarySearch(int a, int b) {
  if (a == b) return; //break this recursive

  int sum = 0;
  int mid = (a+b)/2+1;
  for (int i = 0; i < n; i++) {
    sum += price[i] / mid;
  }

  if (sum == c) {
    if(maxAns < mid) maxAns = mid;
    possible = true;
    binarySearch(mid,b);
  }
  else if (sum < c) {
    binarySearch(a,mid-1); //Key is lower than
  }
  else if (sum > c) {
    if (maxAns < mid) maxAns = mid;
    binarySearch(mid,b); //Key is higher than
  }
}

int main() {
  int maxA = 0, minA = INT_MAX;
  scanf("%d %d", &n,&c);
  for (int i = 0; i < n; i++) {
    scanf("%d", &price[i]);
    if (price[i] > maxA) maxA = price[i];
    if (price[i] < minA) minA = price[i];
  }
  binarySearch(minA,maxA);
  printf("%d", maxAns);
}
