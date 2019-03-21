#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX(a,b) (a>b)?a:b


int main()
{
    int x,y,size;
    scanf("%d %d %d", &x, &y, &size);
    long long data[x][y];

    for(int i = 0; i < x; i++)
        for(int o = 0; o < y; o++) {
            scanf("%lld", &data[i][o]);
            if(o != 0)
                data[i][o]+=data[i][o-1]; //Not corner
        }

    long long max;
    max = -1e9;
    for(int i = 0; i < x - (size - 1); i++) {
        for(int o = 0; o < y - (size - 1); o++) {
            long long sum = 0;
            for(int p = i; p < i + size; p++) {
                if(o == 0)
                    sum += (data[p][o + size - 1]);
                else
                    sum += (data[p][o + size - 1]) - (data[p][o - 1]);
            }

            if (sum > max)
                max = sum;
        }
    }
    printf("%lld",max);
    return 0;
}
