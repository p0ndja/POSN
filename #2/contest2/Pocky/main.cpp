#include <bits/stdc++.h>
using namespace std;

int compareFunction(const void* a, const void* b) {
    const int *aa = (const int*) a;
    const int *bb = (const int*) b;
    return *aa - *bb;
}

int main() {
    vector<int> data;
    int n, m, ans[10001]; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        int temp; scanf("%d", &temp);
        data.push_back(temp);
    }
    qsort(data.data(), n, sizeof(int), compareFunction); //Sort Data

    /*
    //Or using C++ Sort Function: sort(data.data(), data.data() + n);
    */

    for(int i = 0; i < m; i++){
        int a,b; scanf("%d %d", &a, &b);
        int beginIndex = lower_bound(data.begin(), data.end(), a) - data.begin(); //lower_bound(data.begin(), data.end(), a)
        int endIndex = upper_bound(data.begin(), data.end(), b) - data.begin(); //upper_bound(data.begin(), data.end(), b)
        ans[i] = endIndex - beginIndex;
    }
    for(int i = 0; i < m;i++) printf("%d\n", ans[i]);
}
