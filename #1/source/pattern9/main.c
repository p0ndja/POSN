#include <stdio.h>

int main()
{
	int input;
	scanf("%d",&input);
	for (int i = 1; i <= input; i++) {
        printf("%d: ",i);
		int o = i;
        while (o>1 && o % 2 ==0){
				printf("*");
				o = o/2;
		}
		printf("*\n");
	}
	return 0;
}
