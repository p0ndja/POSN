#include <stdio.h>
#include <limits.h>

int plateform[15][15];
int maximum=INT_MAX;
int FY[]={-1,0,1};
int ANS[15];
int RANS[15];

void frog(int x,int y,int limx,int limy,int malaeng){
	int tonnee = malaeng + plateform[y][x];
	ANS[x] = plateform[y][x];
	if(x == limx){
		if(tonnee < maximum){
			maximum = tonnee;
            for(int i = 0; i <= limx; i++)
                RANS[i]=ANS[i];
		}
		return;
	}
	else{
		for(int i = 0; i < 3; i++){
			if(y+FY[i] >=0 && y+FY[i] <= limy && x+1<=limx)
                frog(x+1, y+FY[i], limx, limy, tonnee);
		}
	}
}


int main(){
	int x,y; scanf("%d %d", &x, &y);
	int stp;scanf("%d", &stp);
	int OK[15];
	int wang[15];
	for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
        scanf("%d", &plateform[i][j]);
	frog(0,stp-1,y-1,x-1,0);
	printf("%d\n",maximum);
	for(int i = 0; i < y; i++)
        printf("%d ", RANS[i]);
}
