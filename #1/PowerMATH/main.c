#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
    int i;
    for(i = 2 ;i >=1 ;i--){
        if(pow(a,i) + pow(b,i) == pow(c,i) ){
            printf("%d",i);
            return 0;
        }
    }
    printf("NO");
    return 0;
}
