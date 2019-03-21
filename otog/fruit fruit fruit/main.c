#include <stdio.h>
#define checkMax(a,b) (a>b)? a : b

int score[15][15];
long max = 0;

void checker(int x, int y, int limit_x_size, int limit_y_size, long scoredSum) {
    long fruit = scoredSum + score[y][x];
    if (x == limit_x_size && y == limit_y_size){ //End of Searching Area
        max = checkMax(max, fruit); //Last Int
        return;
    } else {
        if(x != limit_x_size) //Not End Array
            checker(x+1, y, limit_x_size, limit_y_size, fruit); //Check Right
        if(y != limit_y_size) //Not End Array
        checker(x, y+1, limit_x_size, limit_y_size, fruit); //Check Down
    }
}

int main(){
    int x,y; scanf("%d %d", &x, &y); //Get Size
    for (int i = 0; i < x; i++) for (int o = 0; o < y; o++) scanf("%d", &score[i][o]); //Save all int in array map
    int scoredSum = 0;
    for (int i = 0; i < y; i++) { //Loop in Y here, loop in X will be in checker
        checker(i, 0, y - 1, x - 1, (long) scoredSum); //NOTE: Array start from '0' not '1'
        scoredSum += score[0][i];
    }
    printf("%d", max);
}
