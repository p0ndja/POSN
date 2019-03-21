#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int count, input;
    while (scanf("%d", &input) != EOF) {
        char a[100000],b[100000]; scanf("%s %s", &a, &b); // a = Long text , b = Comparator
        count = 0;
        for (int i = 0; i < strlen(a); i++) {
            int not = 0;
            for (int j = 0; j < strlen(b); j++) {
                if (a[i+j] != b[j]) {
                    not = 1;
                    break; //This character is not
                }
            }
            if (not == 0) count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
