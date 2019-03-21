#include <bits/stdc++.h>

using namespace std;

int data[100][100];    //take adjacent array
int node, side; //node is x point , side is line that connect
int pathed[100];
int ans[1000];
int k = 0;

int compare (const void *x, const void *y) {
    return *(int *)x - *(int *)y;
}

void branch(int s, int e, int weight) {
    for (int i = 1; i <= node; i++) {
        if (data[s][i] >= 1) {
            branch(i, e, weight + data[s][i]);
        } else if(s == e) { //Arrived Destination
            ans[k] = weight;
            k++;
            break;
        }
    }
}

int main(){
    int start, endd;
    scanf("%d %d %d %d", &node, &side, &start, &endd);
    for (int i = 0; i < side; i++) {
        int a,b,weight;
        scanf("%d %d %d", &a, &b, &weight);
        data[a][b] = weight;
    }
    branch(start,endd,0);

    qsort(ans, k, sizeof(int), compare); //Sort All Possible answer length
    printf("%d",ans[0]);
    return 0;
}
