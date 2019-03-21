#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int arr[500005];
int diamond;
int town;

int Binary(int l, int r) {
    while (l < r) {
        int T = l + (r-1)/2;
        int cnt = 0;
        for (int i = 0; i < diamond; i++) {
            if (arr[i] / T == 0) {
                cnt++;
            } else {
                if (arr[i] % T == 0)
                    cnt += (arr[i]/T);
                else cnt += (arr[i]/T) + 1;
            }
        }
        if (cnt <= town) {
            r = T;
        } else {
            l = T + 1;
        }
    }
    return (l-r+1)/2;
}

int main() {
    scanf("%d %d", &town, &diamond);
    for (int i=0; i < town; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d", Binary(0,500000));
}

/*int main() {
    double sum = 0, diamond;
    int count; scanf("%d %lf", &count, &diamond);
    double people[count], town[count]; for (int i = 0; i < count; i++) {
        scanf("%lf", &people[i]);
        sum += people[i];
    }

    for (int i = 0; i < count; i++) {
        if (((double) people[i] / (double) sum) * diamond < 1) {
            town[i] = 1;
            diamond--;
            sum -= people[i];
            people[i] = 0;
        }
    }
    for (int i = 0; i < count; i++) {
        if (people[i] != 0) {
            double val = ((double) people[i]/ (double) sum) * diamond;
            if (val - floor(val) > 0.5) val = ceil(val);
            else val = floor(val);
            town[i] = val;
        }
    }
    double max = -1;
    for (int i = 0; i < count; i++) {
        if (max < (people[i] / town[i]))
            max = (people[i] / town[i]);
    }
    printf("%.0f", max);

}*/
