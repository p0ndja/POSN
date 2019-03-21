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

    int startX, startY, endX, endY;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%s", maps[i]);

    scanf("%d %d %d %d", &startX, &startY, &endX, &endY);
    startX--;
    startY--;
    endX--;
    endY--;

    queue<pair<pair<int,int>,int>> next;
    next.push(make_pair(make_pair(startX,startY),0));
    while(!next.empty())
    {
        int nextX = next.front().first.first;
        int nextY = next.front().first.second;
        int level = next.front().second;

        if (nextX == endX && nextY == endY)
        {
            printf("%d\n", level);
            return 0;
        }
        if (walk(nextX, nextY, 1,2))
        {
            next.push(make_pair(make_pair(nextX + 1, nextY + 2), level + 1));
            maps[nextX + 1][nextY + 2] = '#';
        }
        if (walk(nextX, nextY, 2,1))
        {
            next.push(make_pair(make_pair(nextX + 2, nextY + 1), level + 1));
            maps[nextX + 2][nextY + 1] = '#';
        }
        if (walk(nextX, nextY, 2,-1))
        {
            next.push(make_pair(make_pair(nextX + 2, nextY - 1), level + 1));
            maps[nextX + 2][nextY - 1] = '#';
        }
        if (walk(nextX, nextY, 1,-2))
        {
            next.push(make_pair(make_pair(nextX + 1, nextY - 2), level + 1));
            maps[nextX + 1][nextY - 2] = '#';
        }
        if (walk(nextX, nextY, -1,-2))
        {
            next.push(make_pair(make_pair(nextX - 1, nextY - 2), level + 1));
            maps[nextX - 1][nextY - 2] = '#';
        }
        if (walk(nextX, nextY, -2,-1))
        {
            next.push(make_pair(make_pair(nextX - 2, nextY - 1), level + 1));
            maps[nextX - 2][nextY - 1] = '#';
        }
        if (walk(nextX, nextY, -1,2))
        {
            next.push(make_pair(make_pair(nextX - 1, nextY + 2), level + 1));
            maps[nextX - 1][nextY + 2] = '#';
        }
        if (walk(nextX, nextY, -2,1))
        {
            next.push(make_pair(make_pair(nextX - 2, nextY + 1), level + 1));
            maps[nextX - 2][nextY + 1] = '#';
        }
        next.pop();
    }
    printf("-1\n");
    return 0;
}
