#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length,count;

void check(char a[], char b[]) {
    if (strlen(b) > length) {
        printf("X ");
    } else if (strcmp(a,b) == 0) {
        printf("P ");
    } else {
        printf("- ");
    }
}

int main()
{
    scanf("%d", &count); scanf("%d", &length);
    if (count > 30 || length > 1e5) return 0;
    int i,o;
    char a[100000],b[100000];
    char result[count];
    for (i = 0; i < count; i++) {
        scanf("%s", &a);
        scanf("%s", &b);
        check(a,b);
        //if (i != count - 1) printf(" ");
    }
    return 0;
}
