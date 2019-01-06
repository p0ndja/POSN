#include <stdio.h>
#include <stdlib.h>

/* PPPPPPPPPP */
//USE QUICKSUM INSTEAD OF FOR LOOP SUM!

int main()
{
    long long amount,set;
    scanf("%lld", &amount);
    scanf("%lld", &set);

    if (amount < 0 || amount > 1000000 || set < 0 || set > 1000000) {
        return 0;
    }

    long long price[(int) amount];

    price[0] = 0;
    for (long long i = 1; i <= amount; i++) {
        scanf("%lld", &price[(int) i]);
        price[(int) i] += price[(int) i-1];
        //Use QUICKSUM instead of For loop SUMMARY!
        //Reference: [Part Quicksum 1 Dimension] http://nullzer0.wikidot.com/quicksum
    }

    for (long long i = 0; i < set; i++) {

        long long start,end;
        scanf("%lld %lld", &start, &end);

        printf("%lld\n", price[end] - price[start - 1]);
    }

    return 0;
}
