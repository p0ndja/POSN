#include<stdio.h>
int main(){
    int g,y,i,j,k,m,ti,tj,li=0,lj=0,stl=999,stc=999,FT=1;scanf("%d %d",&g,&y);
    char MAP[g+1][y+1];
    int LOD[g+1][y+1];

    for(i=0;i<g;i++)scanf("%s",&MAP[i]);
    //printf("THE MAP IS/n");
    //for(i=0;i


    for(i=0;i<g;i++)for(j=0;j<y;j++){
        //printf("Checking<%d,%d>(%c)\n",i,j,MAP[i][j]);
        if(MAP[i][j]=='.'){//printf("WATER\n");
         goto won;}
        else{
            //printf("DIN\n");
            int nump = 0;
            for(ti=i-1;ti<=i+1;ti+=2) {if(MAP[ti][j]=='.') {
            nump++;}}
            for(tj=j-1;tj<=j+1;tj+=2) {if(MAP[i][tj]=='.') {
            nump++;}}
            //printf("THERE ARE %d WATER\n",nump);
            if(nump<3){
                //printf("=========X at <%d,%d>",i,j);
                LOD[i][j]=156;
                if(i<stl)stl=i;
                if(j<stc)stc=j;
                if(i>li)li=i;
                if(j>lj)lj=j;
            }
        }
        won:printf("");
    }
    for(i=stl;i<=li;i++){
    for(j=stc;j<=lj;j++){
    if(LOD[i][j]==156)printf("X");
    else printf(".");}printf("\n");}
}
