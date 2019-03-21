#include <stdio.h>
#include <stdlib.h>

int main() {
    int zero,one;
    scanf("%d %d", &zero, &one);
    int length = zero + one;

    int array[length],orig[length]; //Create array for 0,1
    for (int i = 0; i < zero; i++) {
            array[i] = 0;
            orig[i] = 0;
    }
    for (int i = zero; i < length; i++) { //But 1 keep in order number not 1 for easy to doing
            array[i] = i-zero+1;
            orig[i] = i-zero+1;
    }

    while(1) {
        int max = 0,locate;
        for (int i = 0; i < length; i++)
            if (array[i] == 0) printf("0");
            else printf("1"); //Print Current Array

        //Find what can do next on '1'
        //Result of loop: It will find the furthest number that can move (0 followed by 1)
        for (int i = 1; i < length; i++){
            if(array[i] != 0 && array[i-1] == 0){
                if (array[i] > max) {
                    max = array[i];
                    locate = i;
                }
            }
        }

        if (max != 0) {
            array[locate - 1] = max;
            array[locate] = 0;

            for (int i = locate + 1; i < length; i++)
                array[i] = orig[i] > max ? orig[i] : 0;

        } else return 0; //There is no any 0 following by 1
        //When End this loop, The furthest *0 followed by 1* will move one digit, then loop again until the first index is 1 and there's no any move
        printf("\n");
    }
}
