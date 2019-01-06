#include<stdio.h>
/*
    SOLVED BY tor12315za
*/

int main(){
	int n,i,j,om=0,in=1,dum=0;scanf("%d",&n);
	while(1){
		if(om == n) return 0;
		if(in == dum){printf("\n");in++;dum=0;}
		printf("%c ",om%26+65);
		dum++;om++;

	}

}
