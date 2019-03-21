#include <stdio.h>
int main(){

	long count;
	scanf("%ld", &count);

	long long line[count];
	long position = 0;

	long i;

	for(i = 0; i < count; i++){
        scanf("%lld", &line[i]);
    }

	long long least = 10000000000000000;

	for(i = 0; i < count; i++){
        if(least > line[i])
            least = line[i];
    }

	for (i = 0; i < count; i++)
        line[i] = line[i] - least;

	position = least%count;

	while(1) {
		if(line[position] == 0)
            break;
		else {
            for(i = 0; i < count; i++){
                if (line[i] != 0)
                    line[i] = line[i] - 1;
            }
            position = (position + 1)%count;
		}
	}
	printf("%ld",position + 1);
	return 0;
}
