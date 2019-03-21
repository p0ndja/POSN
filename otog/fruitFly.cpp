#include <bits/stdc++.h>

using namespace std;

char maps[1001][1001];

int m,n;

bool walk(int x, int y, int dx, int dy)
{
    if((x + dx >= 0 && y + dy >= 0) && (x + dx < n && y + dy < m))
    {
        if (maps[x+dx][y+dy] == '.')
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<char> cha;
    int startX, startY, endX, endY;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%s", maps[i]);

    scanf("%d %d %d %d", &startX, &startY, &endX, &endY);
    startX--;
    startY--;
    endX--;
    endY--;
    int last = 1e9;
    queue<pair<pair<int,int>,int>> next;
    next.push(make_pair(make_pair(startX,startY),0));
    while(!next.empty())
    {
        int nextX = next.front().first.first;
        int nextY = next.front().first.second;
        int level = next.front().second;
        if (maps[nextX][nextY]>='A'&&maps[nextX][nextY]>='Z'){
            if(last>=level){last=level;cha.insert(maps[nextX][nextY]);}
        }else if(maps[nextX][nextY]=='0'){
          maps[nextX][nextY] = '1';
          if(maps[nextX][nextY]=='0'){
            next.push(make_pair(make_pair(nextX, nextY), level + 1));
          }

        }
        next.pop();
    }
    printf("-1\n");
    return 0;
}
