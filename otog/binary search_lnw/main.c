#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int key;
int A[1000000];
int BinarySearch(int LI, int HI) { //LI,HI is index
	if (LI > HI) return -1; //Key not found
	if (key >= A[(LI+HI)/2] && key < A[((LI+HI)/2) + 1]) return (LI+HI)/2;
	else if (key < A[(LI+HI)/2]) BinarySearch(LI, ((LI+HI)/2) - 1);
	else BinarySearch(((LI+HI)/2) + 1, HI);
}

int main()
{
    int sample;
    int count; scanf("%d %d", &count, &sample);
    for (int i = 0; i < count; i++) scanf("%d", &A[i]);
    A[count] = INT_MAX;
    for (int i = 0; i < sample; i++) {
        scanf("%d", &key);
        int result = BinarySearch(0,count - 1);
        int re;
        if (result < 0)
            re = -1;
        else {}
            //re = A[result];
        printf("%d\n", result);
    }

    return 0;

}
