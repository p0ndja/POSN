#include <bits/stdc++.h>

using namespace std;

vector<int> vec[100];
bool visited[100];

int main()
{
    int n,m,source,dest;
    scanf("%d %d %d %d", &n, &m, &source, &dest);
    for (int i = 0, u, v; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    queue<pair<int,int>> q;
    q.push(make_pair(source,0));
    visited[source] = true;

    while(!q.empty())
    {
        int this_node = q.front().first;
        int this_dist = q.front().second;
        q.pop();
        for(auto e: vec[this_node])
        {
            if (!visited[e])
            {
                visited[e] = true;
                q.push(make_pair(e,this_dist + 1));
            }
        }
    }

    return 0;
}
