#include <stdio.h>
#include <math.h>
main(){

	long long a,b;

	scanf("%lld",&a);
	scanf("%lld",&b);

	if (a < 1 || b < 1 || a > 32000 || b > 32000)
        return 0;

	a--;
	b--;

	float answer = 0;

	for(int i=0;i<b;i++){
		answer = answer + (ceil(((i+1)*(float)a)/(float)b)-floor((i*(float)a)/(float)b));
	}

	printf("%g", answer);

	return 0;

}
