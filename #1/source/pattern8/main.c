#include<stdio.h>
void star(long long input){
    for(long long i = 0; i < input;i++)
        printf("*");
}
void dash(long long input){
    for(long long i = 0; i < input;i++)
        printf("-");
}
void pattern(long long num,long long line){
		if(line==num){
                star(num);
        } else if (num == 4 && line == 2) {
            star(1);
            dash(2);
            star(1);
        } else if(line==1) {
            star(1);
            dash(1);
            star(num-2);
        } else if(line==num-1){
            star(1);
            dash(num-2);
            star(1);
        } else if(line==2){
            star(1);
            dash(1);
            star(1);
            dash(num-4);
            star(1);
        } else {
            if(line>0) {
                star(1);
                dash(1);
                pattern(num-4,line-2);
                dash(1);
                star(1);
            }
		}
}

int main() {

	long long n;
	scanf("%lld",&n);

	for(long long i = 0; i < n; i++){
		pattern(n, i+1);
		printf("\n");
	}
}
