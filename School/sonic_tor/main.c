#include<stdio.h>
#include<string.h>
void remove_element(int *array, int index, int array_length)
{
   int i;
   for(i = index; i < array_length - 1; i++) array[i] = array[i + 1];
}
int main(){
    int q,i,j,k,si;scanf("%d",&q);
    int NANS[q][500];
    int NANSL[q];
    for(i=0;i<q;i++){
        char st[500];scanf("%s",&st);
        int SUMMU[500][2],si=0;
        for(j=0;j<strlen(st);j++){
            //printf("<<<
            int x;
            if ((int)st[j] >= 95) x= (int)st[j]-32;
            else x=(int)st[j];

                //printf("***AFTER CONVERT IS %c(%d)\n",x,x);
            if(si==0){SUMMU[0][0]=x;SUMMU[0][1]=1;si++;
            //printf("NEW %d as %c(%d) has %d\n",si-1,SUMMU[si-1][0],SUMMU[si-1][0],SUMMU[si-1][1]);
            }
            else {
                for(k=0;k<si;k++){if(x==SUMMU[k][0]){SUMMU[k][1]++;
                //printf("    %d as %c(%d) has %d\n",k,SUMMU[k][0],SUMMU[k][0],SUMMU[k][1]);
                goto finddd;}}

                SUMMU[si][0]=x;SUMMU[si][1]=1;si++;
                //printf("NEW %d as %c(%d) has %d\n",si-1,SUMMU[si-1][0],SUMMU[si-1][0],SUMMU[si-1][1]);
                }
        finddd:printf("");
        }
        for(j=0;j<si;j++){
            NANS[i][j] = SUMMU[j][1];
        }
        NANSL[i]=si;
    }

    for(i=0;i<q;i++){
        int ans=0;
        int now=27;
        //printf("THE ANS is ");
        //for(j=0;j
        //printf("\n");
        for(j=0;j<NANSL[i];j++){
            //printf("=====NEW INDEX(%d) \n\n",j);
            if(now == 1) now--;
            now--;
            int mak=0,nai;
            for(k=0;k<NANSL[i]-j;k++){
                if(NANS[i][k]>mak){mak=NANS[i][k];nai=k;
                //printf("++Found new MAK(%d) at %d\n",mak,nai);
                }
            }
            ans+=now*mak;
            //printf("##PLUSING ANSWER(%d)\nthere has %d\n",j,ans);
            remove_element(NANS[i],nai,NANSL[i]-j);
            //for(k=0;k
        }
        printf("%d\n",ans);
    }
}
