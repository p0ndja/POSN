#include <stdio.h>
#include <stdlib.h>
/*
TEST CASE
5 15
D
DLGRDLGFDTRRWHG
GFLSGFLGJIOOYQY
TRUEYREPRORRRFS
SHRLDGEYRTPDSTU
NZRCRBCRDSDKDKD
*/
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);

    char compare; scanf(" %c", &compare);

    char data[x][y];
    for (int i = 0; i < x; i++) {
        int sum = 0;
        for (int o = 0; o < y; o++) {
            scanf(" %c", &data[i][o]);
            if (data[i][o] == compare)
                sum++;
        }
        printf("%d\n", sum);
    }
    return 0;
}
