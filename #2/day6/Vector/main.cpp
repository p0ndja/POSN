#include <bits/stdc++.h>

using namespace std;



int main()
{

    vector<int> u;
    u.push_back(5);
    u.push_back(6);
    vector<int>::iterator it; //Pointer
    for (it = u.begin(); it< u.end(); it++)
        cout << *it << endl; //Value at index it

    int N = 5;
    vector<int> adj[N];
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);

    for (int i = 1; i < N; i++) {
            cout << " node " << i << endl;
            for (int j = 0; j < adj[i].size(); j++) {
                cout<< " -> " << adj[i][j] ;
            }
            cout << endl;
    }


    return 0;
}
