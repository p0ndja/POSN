#include <bits/stdc++.h>
using namespace std;

int cou[26];
int co[27][27];
int big,small;

int main() {

  char c[1000001];
  scanf("%s", c);
  for (int o = 0; o < strlen(c); o++) {
    int x = c[o];
    if(c[o] >= 'A' && c[o] <= 'Z' && c[o] != '\0') {
      if (c[o+1] >= 'a' && c[o+1] <= 'z') { //Same Lower and Upper case
        co[x - 65][c[o+1] - 97]++;
        //printf("*%d*%c%c = %d\n", o, x, c[o+1], co[x-65][c[o+1] - 97]);
        continue;
      } else { //Other case
        cou[x - 65]++;
        //printf("[%d]%c = %d\n", o, x, cou[x-65]);
        continue;
      }
    }

  }
  queue<int> mix;
  queue<pair<int,int>> big;
  for (int i = 0; i < 26; i++) {
    if (cou[i] > 0) {
      mix.push(i);
      //printf("-push %c %d\n", i+65, cou[i]);
    }
  }
  for (int i = 0; i < 26; i++) {
    for (int o = 0; o < 26; o++) {
      if (co[i][o] > 0) {
        big.push(make_pair(i,o));
        //printf("*push %c%c %d\n", i+65, o+97, co[i][o]);
      }
    }
  }
  printf("%d\n", mix.size());
  while(!mix.empty()) {
    int a = mix.front();
    printf("%c %d\n", a+65, cou[a]);
    mix.pop();
  }
  printf("%d\n", big.size());
  while(!big.empty()) {
    int a = big.front().first;
    int b = big.front().second;
    printf("%c%c %d\n", a+65, b+97, co[a][b]);
    big.pop();
  }
  return 0;
}
