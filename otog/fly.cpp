#include <bits/stdc++.h>

using namespace std;

char maps[51][51];
int m,n;

int walk(int y, int x, int dy, int dx)
{
    if((x + dx >= 0 && y + dy >= 0) && (x + dx < n && y + dy < m))
    {
        if (maps[y+dy][x+dx] == '0')
        {
            return 1;
        } else if (maps[y+dy][x+dx] >= 'A' && maps[y+dy][x+dx] <= 'Z') {
          return 0;
        }
    }
    return -1;
}

qsort()
int main()
{
    int x,y;
    scanf("%d %d %d %d", &n, &m, &y, &x);
    for (int i = 0; i < m; i++)
        scanf("%s", maps[i]);
    queue<pair<pair<int,int>,int>> que;
    set<char> ans;
    int last = 1000000000;
    que.push(make_pair(make_pair(x,y), 0));

    while(!que.empty())
    {
        int nX = que.front().first.first;
        int nY = que.front().first.second;
        int l = que.front().second;

        if (maps[nX][nY] >= 'A' && maps[nX][nY] <= 'Z')
        {
            if (last >= l)
            {
                last = l;
                ans.insert(maps[nX][nY]);
            }
        }
        else if (maps[nX][nY] == '0')
        {
          maps[nX][nY] = '*';
            if (walk(nX,nY,1,0) >= 0)
            {
                que.push({{nX+1,nY},l+1});
            }
            if (walk(nX,nY,0,1) >= 0)
            {
                que.push({{nX,nY+1},l+1});
            }
            if (walk(nX,nY,-1,0) >= 0)
            {
                que.push({{nX-1,nY},l+1});
            }
            if (walk(nX,nY,0,-1) >= 0)
            {
                que.push({{nX,nY-1},l+1});
            }
        }
        que.pop();
    }
    for (auto e : ans) {
    cout << e << endl;
    }
    return 0;
}
