#include <bits/stdc++.h>

using namespace std;

bool visited[1001][1001];
int attime[1000002];

int main()
{
    int n,m,q;
    scanf("%d%d%d",&n,&m,&q);
    for(int i=0;i<m;i++)
    {
        int temp1,temp2;
        scanf("%d %d",&temp1,&temp2);
        visited[temp1-1][temp2-1]=true;
    }
    int startx,starty;
    scanf("%d %d",&starty,&startx);
    startx--; starty--;
    const int movey[]={1,-1,0,0};
    const int movex[]={0,0,1,-1};
    queue<pair<int,pair<int,int>>> que; //y = .first,x = .second.first ,at time = .second.second
    que.push(make_pair(starty,make_pair(startx,0)));
    visited[starty][startx]=true;
    int max_t=0;
    while(!que.empty())
    {
        int this_y=que.front().first;
        int this_x=que.front().second.first;
        int this_t=que.front().second.second;
        attime[this_t]++;
        for(int i=0;i<4;i++)
        {
            int nexty=this_y+movey[i];
            int nextx=this_x+movex[i];
            if(nexty < n && nexty >= 0 && nextx < n && nextx >= 0 && visited[nexty][nextx]==false)
            {
                que.push(make_pair(nexty,make_pair(nextx,this_t+1)));
                visited[nexty][nextx]=true;
            }
        }
        que.pop();
    }
    for(int i=1;attime[i]!=0;i++)
    {
        attime[i]+=attime[i-1];
        max_t=i;
    }
    for(int i=0;i<q;i++)
    {
        int temp;
        scanf("%d",&temp);
        if(attime[temp]==0)printf("%d\n",attime[max_t]);
        else printf("%d\n",attime[temp]);
    }
}
