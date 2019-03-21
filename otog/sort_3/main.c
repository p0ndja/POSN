#include <stdio.h>

void sortStrings(char arr[][100], int n) {
    char temp[100];
    for (int j=0; j<n-1; j++)
        for (int i=j+1; i<n; i++)
            if (strcmp(arr[j], arr[i]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
}

int main()
{
    int ccc; scanf("%d", &ccc);

    char arr[50000][100];
    for (int i = 0; i < ccc; i++)
        scanf("%s", arr[i]);
    int n = sizeof(arr)/sizeof(arr[0]);

    sortStrings(arr, n);

    printf("Strings in sorted order are : ");
    for (int i=0; i<n; i++)
        printf("\n String %d is %s", i+1, arr[i]);
    return 0;
}
