#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

int key;
int A[10000];
int BinarySearch(int LI, int HI) { //LI,HI is index
	if (LI > HI) return -1; //Key not found
	if (key == A[(LI+HI)/2]) return (LI+HI)/2;
	else if (key < A[(LI+HI)/2]) BinarySearch(LI, ((LI+HI)/2) - 1);
	else BinarySearch(((LI+HI)/2) + 1, HI);
}

int main()
{
    int count; scanf("%d", &count);
    for (int i = 0; i < count; i++) scanf("%d", &A[i]);
    scanf("%d", &key);
    int result = BinarySearch(0,count - 1);
    printf("%d", result);
    return 0;
}
