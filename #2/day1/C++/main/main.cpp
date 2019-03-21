#include <bits/stdc++.h>

using namespace std;

struct lineStruct{
    int start;
    int end;
    int weight;
};

lineStruct line[100];
int adj[100][100];
bool visited[100];

bool compare(lineStruct a, lineStruct b) {
    if (a.start == b.start) return a.end < b.end;
    return a.start < b.start;
}

int main()
{
    int node, lineCase, startPoint;

    int OrZ = 0;

    scanf("%d %d %d", &node, &lineCase, &startPoint); startPoint -= OrZ;

    for (int i = 0; i < lineCase; i++) {
        int weight;
        scanf("%d %d %d", &line[i].start, &line[i].end, &line[i].weight);
        adj[line[i].start - OrZ][line[i].end - OrZ] = line[i].weight;
    }

    sort(line, line + lineCase, compare);
    queue<int> q;

    q.push(startPoint);
    visited[startPoint] = 1;

    printf("---------------\n%d ",startPoint);
    while(!q.empty()) {
        int top = q.front(); q.pop();
        for (int i = OrZ; i < node; i++){

            if (adj[top][i] != 0 && visited[i] == false) {
                q.push(i);
                visited[i] = true;
                printf("%d(%d) ", i, adj[top][i]);
            }
        }
    }
}
