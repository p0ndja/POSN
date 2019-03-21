#include<stdio.h>
#include<stdlib.h>
int PORMAN[500000];
int SOONG[500000];
int SENBAPA[500000][3];
int t=0,ti=0;
int p;
long long SUM=0;

int haporman(int ind){
    if(ind!=PORMAN[ind])PORMAN[ind] = haporman(PORMAN[ind]);
    return PORMAN[ind];
}

void kaimairu(){
    while(t < p-1){
        if((haporman(SENBAPA[ti][0]))!=(haporman(SENBAPA[ti][1]))){
                //printf("^^^^NOTSAME\n");
            SUM+=SENBAPA[ti][2];
            t++;
            if(SOONG[haporman(SENBAPA[ti][0])]<SOONG[haporman(SENBAPA[ti][1])]){
                    PORMAN[haporman(SENBAPA[ti][0])]=PORMAN[haporman(SENBAPA[ti][1])];
                    SOONG[haporman(SENBAPA[ti][0])]+=SOONG[haporman(SENBAPA[ti][1])];
            }
            else{
                    PORMAN[haporman(SENBAPA[ti][1])]=PORMAN[haporman(SENBAPA[ti][0])];
                    SOONG[haporman(SENBAPA[ti][1])]+=SOONG[haporman(SENBAPA[ti][0])];
            }
        }
        ti++;
    }
    printf("%lld",SUM);
}


static int comp(const void* p1, const void* p2) {
  int* arr1 = (int*)p1;
  int* arr2 = (int*)p2;
  int diff1 = arr1[2] - arr2[2];
  if (diff1) return diff1;
  return arr1[0] - arr2[0];
}


int main(){
    int l;scanf("%d %d",&p,&l);
    for(int i=0;i<p;i++){PORMAN[i]=i;SOONG[i]=1;}
    for(int i=0;i<l;i++){
        scanf("%d %d %d",&SENBAPA[i][0],&SENBAPA[i][1],&SENBAPA[i][2]);
    }
    qsort(SENBAPA, l, 3*sizeof(int), comp);
    //printf("-------------\n");for(int i=0;i<l;i++)printf("%d %d %d\n",SENBAPA[i][0],SENBAPA[i][1],SENBAPA[i][2]);
    kaimairu();
}
