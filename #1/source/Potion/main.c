#include <stdio.h>

int func(int a,int b,int m){
    if(m == 0){
        if (a > b) return a;
        else return b;
    }
    if(m == 1){
        if (a < b) return a;
        else return b;
    }
}

int main(){

    int n,m;scanf("%d %d",&n,&m);
    int a[n];
    int b[m][2];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < m; i++) {
        scanf("%d %d", &b[i][0], &b[i][1]);
        int c=0;
        for(int j = 0; j < n; j++){
            if (a[j] >= func(b[i][0], b[i][1], 1) && a[j] <= func(b[i][0], b[i][1], 0))
                c++;
        }
        printf("%d\n", c);
    }

    return 0;
}
