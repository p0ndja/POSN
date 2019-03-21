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
    set<char> cha;
    int startX, startY;

    scanf("%d %d", &n, &m);
    scanf("%d %d", &startX, &startY);
    for (int i = 0; i < m; i++)
        scanf("%s", maps[i]);

    int last = 1e9;
    queue<pair<pair<int,int>,int>> next;
    next.push(make_pair(make_pair(startY,startX),0));
    while(!next.empty())
    {
        int nextX = next.front().first.first;
        int nextY = next.front().first.second;
        int level = next.front().second;
        if (maps[nextY][nextX]>='A'&&maps[nextY][nextX]<='Z'){
            if(last>=level){
                last=level;
                cha.insert(maps[nextY][nextX]);
            }
        }else if(maps[nextY][nextX]=='0'){
            maps[nextY][nextX] = '1';
            if(maps[nextY+1][nextX]=='0'){
                next.push(make_pair(make_pair(nextY+1, nextX), level + 1));
            }
            if(maps[nextY-1][nextX]=='0'){
                next.push(make_pair(make_pair(nextY-1, nextX), level + 1));
            }
            if(maps[nextY][nextX+1]=='0'){
                next.push(make_pair(make_pair(nextY, nextX+1), level + 1));
            }
            if(maps[nextY][nextX+1]=='0'){
                next.push(make_pair(make_pair(nextY, nextX-1), level + 1));
            }
        }
        next.pop();
    }
    for(auto e:cha)
        cout << e << endl;
    return 0;
}

