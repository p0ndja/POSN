#include<stdio.h>
#include<string.h>

int main(){
    char NUM[1010+1];int i=2;scanf("%s",NUM);
    for(i=2;i<=9;i++){
        char USE[1010+1],ANS[1010+1],BASE[1010*1000];int SED = 0,k=0,l=0,j=0;
        strcpy(ANS,NUM);
        while(1){
            strcpy(USE,ANS);k=0;l=0;SED=0;
            while(1){
                if (USE[k]=='\0')goto CHECK;
                if(!(((USE[k]-'0'+10*SED)/i)==0&&l==0)){
                    ANS[l] = (USE[k]-'0'+10*SED)/i+'0';
                    l++;}
                SED = (USE[k]-'0'+10*SED)%i;
                k++;
            }
            CHECK:printf("");ANS[l]='\0';
            BASE[j]=SED+'0';j++;
            //printf("\n//FROM %s / %d is %s R(%d)\n",USE,i,ANS,SED);getch();

            if(ANS[0]=='\0')goto ANS;
        }
        ANS:printf("%d : ",i);
        BASE[j] = '\0';
        for(j=strlen(BASE)-1;j>=0;j--)printf("%c",BASE[j]);
        printf("\n");
    }
    return 0;
}
