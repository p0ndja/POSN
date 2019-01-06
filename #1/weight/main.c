#include <stdio.h>
#include <math.h>

int coef[21], count, weight;
int main(){int n;scanf("%d",&n);for(int i=0;n!=0;i++){coef[i]=n%3;n/=3;}for(int i=0; i<20; i++){switch(coef[i]){case 1:count++;weight+=(int)pow(3.0F,(double)i);break;case 2:count++;coef[i+1]++;break;case 3:coef[i] = 0;coef[i+1]++;break;}}printf("%d %d", count, weight);return 0;}
