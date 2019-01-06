#include <stdio.h>
#include <stdlib.h>

star(int t){
	for(int n = 1;n <= t;n++){
		if(n == 1){
			printf("/*");
		}
		else printf(" *");
	}
	printf("\\");
}

space(int i) {
    for(int o = 1; o <= i; o++) {
        printf(" ");
    }
}

under(int i) {
    for(int o = 1; o <= i; o++) {
        printf("_");
    }
}
void line() {
    printf("\n");
}

int main()
{
    int input;
    scanf("%d", &input);

    //==================TOP===========================
    space(input + 4); printf("|"); line();
    space(input + 2); printf("__*__"); line();
    space(input + 3); printf("/|\\"); line();
    space(input + 2); printf("/* *\\");

    //==================STAR==========================
    for(int level = 1; level<=input; level++){
		int each;
		for(each=level + 2;each <= (level+4) ;each++){
			line();
			space( (input+4) - each);
			star(each);
		}
	}

	//==================BASE=========================
	line();
	space(input+3); printf("|||"); line();
	under(input+3); printf("|||"); under(input+3);
}
