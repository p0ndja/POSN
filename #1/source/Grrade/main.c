#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* PPPPPPTTTT */
int maximum=INT_MAX;

int main()
{
    int std;
    scanf("%d", &std);
    long long grade[std];

    for (int i = 0; i < std; i++) {
        long long score;
        scanf("%lld", &score);
        grade[(int) score] += 1;
    }

    int count = 0;
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        long long sum = 0;
        long long start;
        long long end;
        scanf("%lld", &start); scanf("%lld", &end);
        if (start > end){
            long long temp = start;
            start = end;
            end = temp;
        }
        for (long long o = start; o <= end; o++) {
            sum += grade[o];
        }
        printf("%lld\n", sum);
    }

    return 0;
}
