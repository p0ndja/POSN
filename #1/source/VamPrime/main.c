#include <stdio.h>

int isPrimed(long long a){
    if (a < 2)
        return 0;
    for (long long c = 2 ; c < a;c++)
        if (a%c== 0)
            return 0;
    return 1;
}
int main(){
    long long c; scanf("%lld",&c);
    int A = 1;
    for(long long i = c - 1; i > 1; i--) {
        if(isPrimed(i)) {
            printf("%lld ", i);
            A = 0;
            break;
        }
    }
    if(A == 1)
        printf("Mr.Nonz ");
    if (c < 0)
        printf("2 ");
    else {
        for(long long i = c + 1; i < c + 1000; i++){
            if(isPrimed(i)) {
                printf("%lld \n",i);
                break;
            }
        }
    }
    return 0;
}
