#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int hp;
    int hp_1,hp_2;
    int combo_1 = 0,combo_2 = 0;
    scanf("%d", &hp);
    hp_1 = hp;
    hp_2 = hp;

    while(true) {
        int damage;
        scanf("%d", &damage);
        if (damage%2==0) {

            combo_2++;
            combo_1 = 0;

            if (combo_2 >= 3) {
                hp_1 = hp_1 - 3;
            } else {
                hp_1--;
            }

        } else {
            combo_1++;
            combo_2 = 0;

            if (combo_1 >= 3) {
                hp_2 = hp_2 - 3;
            } else {
                hp_2--;
            }
        }

        if (hp_1 < 1) {
            printf("0\n%d",damage);
            break;
        }
        if (hp_2 < 1) {
            printf("1\n%d",damage);
            break;
        }
    }
}
