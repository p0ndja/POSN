#include <bits/stdc++.h>

using namespace std;
typedef vector<pair<int,int>> WGraph;
void addEdge(WGraph adj[], int u, int v, int w){
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
    //2 Direction 0->1 = 1->0
}

int main()
{
    int n = 5;
    vector<pair<int,int>> adj[n];
    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 4, 20);
    addEdge(adj, 1, 2, 30);
    addEdge(adj, 1, 3, 40);
    addEdge(adj, 1, 4, 50);
    addEdge(adj, 2, 3, 50);

    vector<pair<int,int>>::iterator it;
    /*for (int i = 0; i < n; i++) {
    for (auto it = adj[i].begin(); it != adj[i].end(); it++)
        cout << *it << " ";
    }*/

    for (int i = 0; i < n; i++) {
        for(it = adj[i].begin(); it < adj[i].end(); it++ ) {
            cout << i << " " << it->first << " " << it->second << endl;
        }
    }
    return 0;
}
