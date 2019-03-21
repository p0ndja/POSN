#include <bits/stdc++.h>

using namespace std;

bool visited[1001][1001];
int water[1000002],n;

bool walk(int x, int y, int dx, int dy) {
  if((x + dx >= 0 && y + dy >= 0) && (x + dx < n && y + dy < n)){
    if (visited[x+dx][y+dy] == false) {
      return true;
    }
  }
  return false;
}

int main() {
  int tree, question; scanf("%d %d %d", &n, &tree, &question);
  for (int i = 0; i < tree; i++) {
    int a,b; scanf("%d %d", &a, &b); visited[a-1][b-1] = true;
  }

  queue<pair<pair<int,int>,int>> que;

  int sX, sY; scanf("%d %d", &sY, &sX); sX--; sY--; que.push({{sY,sX},0}); visited[sY][sX] = true;
  int maxx = 0;
  while(!que.empty()) {
    int nX = que.front().first.second;
    int nY = que.front().first.first;
    int l = que.front().second;
    water[l]++;
    que.pop();
    if (walk(nX,nY,0,1)) {
      visited[nY+1][nX] = true;
      que.push(make_pair(make_pair(nX,nY+1),l+1));
    }
    if (walk(nX,nY,0,-1)) {
      visited[nY-1][nX] = true;
      que.push(make_pair(make_pair(nX,nY-1),l+1));
    }
    if (walk(nX,nY,-1,0)) {
      visited[nY][nX-1] = true;
      que.push(make_pair(make_pair(nX-1,nY),l+1));
    }
    if (walk(nX,nY,1,0)) {
      visited[nY][nX+1] = true;
      que.push(make_pair(make_pair(nX+1,nY),l+1));
    }
  }
  for (int i = 1; water[i] != 0; i++) {
    water[i] += water[i-1];
    maxx = i;
  }
  for (int i = 0; i < question; i++) {
    int a; scanf("%d", &a);
    if (water[a] == 0) printf("%d\n", water[maxx]);
    else printf("%d\n", water[a]);
  }
  return 0;
}
