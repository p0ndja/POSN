#include <stdio.h>

int main()
{
    int a;
	printf("=======================================\n           STAR DUST\n=======================================\n");
    char space = " ";
    printf("Please insert integer: ");
    scanf("%d",&a);

    for (int i = 1; i <= a; i++) {
        for (int i = 1; i <= a; i++) {
            printf("* ");
        }

        if (i%2==1) {
            printf("\n ");
        } else {
            printf("\n");
        }
    }
	
	creditTxt();
    return 0;
}


void creditTxt() {
    printf("Coded by Palapon Soontornpas\n");
}
