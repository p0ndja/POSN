#include<stdio.h>
#define MAX(a,b) (a>b)?a:b
#define MIN(a,b) (a<b)?a:b

int APPLE[15][15];
long maksus = 0;

void GEPPAP(int x,int y,int limx,int limy,long pollamai){
    long turian = pollamai + APPLE[y][x];
    int i,ka=0;
    if(x == limx && y == limy){
        maksus=MAX(maksus,turian);
        return;
    }
    else {
        if(x!=limx) GEPPAP(x+1,y,limx,limy,turian);
        if(y!=limy) GEPPAP(x,y+1,limx,limy,turian);
    }
}

int main() {
    int m,n;scanf("%d %d",&m,&n);
    int i,j;
    int k=0;
    for(i=0;i<m;i++)for(j=0;j<n;j++)scanf("%d",&APPLE[i][j]);

    for(i=0;i<n;i++){
        GEPPAP(i,0,n-1,m-1,(long)k);
        k+=APPLE[0][i];
    }

    printf("%d",maksus);

}
