#include <stdio.h>
#include <stdlib.h>

int compareFunction (const void * a, const void * b) {
   return *(int*)a - *(int*)b; 	//Ascending a - b
   								//Descending b - a
}

int main(){
    long n;	scanf("%d",&n);
    int price[n];	for (long i = 0; i < n; i++)scanf("%d", &price[i]);

	qsort(price, n, sizeof(int), compareFunction);

	long sum = 0, fRight = n - 1, fLeft = 0;
	while(1) {
        if(fLeft <= fRight) {
			sum += price[fLeft];
			fLeft++;
		} else goto end; //The 1st item

		if(fLeft <= fRight) {
			sum += price[fLeft];
			fLeft++;
		} else goto end; //The next-to 1st item

		if(fLeft <= fRight) {
			sum += price[fRight];
			fRight--;
		} else goto end; //The last item
		fRight--;//Skip the before last item
    }

    end: printf("%d", sum);
    return 0;
}
