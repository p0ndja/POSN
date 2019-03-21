#include<stdio.h>
int main(){
    int z,o,i; scanf("%d %d", &z, &o);
    int TABLE[z+o];
    int SAVE[z+o];
    //printf("%d",TABLE[2]);
    for(i=0;i<z;i++)TABLE[i] = 0;
    for(i=z;i<z+o;i++)TABLE[i] = i-z+1;
    for(i=0;i<z+o;i++)SAVE[i] = TABLE[i];
    //for(i=0;i
    while(1){
        for(i=0;i<z+o;i++){
            if(TABLE[i]==0)printf("0");
            else printf("1");
        }
        int mak = 0,nai;
        for(i=1;i<z+o;i++){
            if(TABLE[i]!=0&&TABLE[i-1] == 0){
                if(TABLE[i] > mak){
                    mak = TABLE[i];nai = i;
                }
            }
        }
        if(mak == 0) return 0;
        else{
            TABLE[nai-1] = mak;
            TABLE[nai] = 0;

            for(i=nai+1;i<z+o;i++){
                if(SAVE[i] > mak)TABLE[i] = SAVE[i];
                else TABLE[i] = 0;
            }
        }
        printf("\n");
    }
}
