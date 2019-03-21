#include <bits/stdc++.h>
using namespace std;

int compareFunction(const void* a, const void* b) {
    const int *aa = (const int*) a;
    const int *bb = (const int*) b;
    return *aa - *bb;
}

int main() {
    vector<int> data;
    int n, m; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int temp; scanf("%d", &temp);
        data.push_back(temp);
    }
    qsort(data.data(), n, sizeof(int), compareFunction); //Sort Data
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        int a,b; scanf("%d %d", &a, &b);
        if (a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        int beginIndex = lower_bound(data.begin(), data.end(), a) - data.begin(); //lower_bound(data.begin(), data.end(), a)
        int endIndex = upper_bound(data.begin(), data.end(), b) - data.begin(); //upper_bound(data.begin(), data.end(), b)
        printf("%d\n", endIndex - beginIndex);
    }
}
