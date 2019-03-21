#include <stdio.h>

#define Up(x) ((x) >= 'A' && (x) <= 'Z')

char message[1000001];
int count = 0, combo = 0;

int main() {
    scanf("%s", message);
    int i;
    for (i = 0; message[i] != '\0'; i++) {
        if (Up(message[i])) { //Count Combo of Uppercase
            combo++;
            continue;
        }
        //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
        //If it isn't stop at the uppercase case
        //Mean this letter is lowercase
        if (combo == 1) { //Only one uppercase letter
            count++;    //Count as SHIFT press
        } else if (combo > 1) {
            if (Up(message[i+1])) { //If next letter is uppercase use shift
                count++; //Count as SHIFT press
                continue; //Go back to loop
            } else {
                count += 2; //Count as CAPS-LOCK
            }
        }
        combo = 0;  //When Uppercase switch to Lowercase
                    //Reset Combo
    }
    if (Up(message[i-1])) { //Check last letter is Uppercase
        count++;
    }

    printf("%d", count);
    return 0;
}
