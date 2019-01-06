#include <stdio.h>

int ceilItUp(int a,int b){
    int ok = (a%b == 0) ? 0 : 1;
    return (a/b) + ok;
}

int main(){
    long long a, i; scanf("%lld", &a);
    int ans[a][2];
    for(i = 0; i < a; i++){
        int h,n;scanf("%d %d",&h,&n);

        if(h == 20 && n >= 45 || h >= 21) {
            ans[i][0] = 0;
            ans[i][1] = 0;
            continue;
        }

        int min = 0;
        h = 20 - h;
        n = 45 - n;
        min = (h*60) + n;
        ans[i][0] = min;
        ans[i][1] = ceilItUp(min, 2);
    }
    for(i = 0; i < a; i++)
        printf("%d %d\n", ans[i][0], ans[i][1]);
}
