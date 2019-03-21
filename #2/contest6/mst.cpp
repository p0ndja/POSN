#include <bits/stdc++.h>

using namespace std;

int point, line;
int data[500000][3];
int s[500000];
int t[500000];

int par(int i) {
    if(i != s[i]) s[i] = par(s[i]);
    return s[i];
}

int comp(const void* p1, const void* p2) {
    int* arr1 = (int*)p1; int* arr2 = (int*)p2;
    int diff1 = arr1[2] - arr2[2];
    if (diff1) return diff1;
    return arr1[0] - arr2[0];
}
int main()
{
    scanf("%d %d", &point, &line);
    for(int i = 0; i < point; i++) {s[i] = i; t[i] = 1;}
    for(int i = 0; i < line; i++) scanf("%d %d %d", &data[i][0], &data[i][1], &data[i][2]);
    qsort(data, line, sizeof(int)*3, comp);

    int count = 0, index = 0;
    long long sum = 0;

    while(count < point - 1) {
        if (par(data[index][0]) != par(data[index][1])) {
            sum += data[index][2];
            count++;
            if (t[par(data[index][0])] < t[par(data[index][1])]) {
                s[par(data[index][0])] = s[par(data[index][1])];
                t[par(data[index][0])] += t[par(data[index][1])];
            } else {
                s[par(data[index][1])] = s[par(data[index][0])];
                t[par(data[index][1])] += t[par(data[index][0])];
            }
        }
        index++;
    }
    printf("%lld", sum);
    return 0;
}
