#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A 65
//Z 90
//a 97
//Z 122

int main()
{
    int count;
    scanf("%d", &count);

    //if (count < 5 || count > 100) return 0;

    for (int i = 0; i < count; i++) {
        char a[501]; scanf("%s", a);

        int co[26]; //keep score
        for (int o = 0; o < 26; o++) co[o] = 0; //set all score to 0

        for (int o = 0; o < strlen(a); o++) {
            int b = a[o];
            if (b >= 97) b -= (97); //Lowercase
            else if (b <= 90) b -= (65); //Uppercase
            co[b]++;
        }

        int temp; //Sort score with bubble sort
        for (int o = 0; o < 26; o++) {
            for (int p = 0; p < 26; p++) {
                if (co[p] > co[p+1]) {
                    temp = co[p];
                    co[p] = co[p+1];
                    co[p+1] = temp;
                }
            }
        }

        int score = 0; //Create Maximum Score
        for (int o = 25; o >= 0; o--)
            if (co[o] == 0) break;
            else score += (co[o]*(o+1));

        printf("%d \n", score);
    }

    return 0;
}
