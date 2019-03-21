#include <stdio.h>
#include <stdlib.h>

space(int a) {
    for (int i = 1; i <= a; i++) {
        printf(" ");
    }
}

int main()
{
    int input;
    scanf("%d", &input);

    int center = (input + 1) / 2; //Because input is always odd number.

    for (int i = 1; i <= input; i++) {
        space(abs(center-i)); //add space, need to be plus integer

        int o; //It will be 1->2->3->4->5<-4<-3<-2<-1
        if (i > center) { //After center
            o = (2*center) - i;
        } else { //Before center
            o = i;
        }

        //==================Star drawer============================
        for(int each = 1; each <=( (o*2) - 1 ); each++){
			if(i == center && each == center && each == i) {
                printf("N"); //Letter 'N' at Center
			} else if (each%2 == 0) {
			    printf("^"); //Position that can divide with 2 is ^
			} else {
			    printf("*"); //Else
			}
		}

		printf("\n");
    }
}
