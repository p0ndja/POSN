#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
/*
char branch[100];
int br = 0;
*/
char data[100] = {'A', 'B', 'C', 'D', 'E', '\0', 'F', '\0', '\0', 'G', 'H', '\0', '\0', 'I', '\0'};;

char parent(int index) {
    return data[(index-1)/2];
}

char left(int index) {
    return data[(index*2)+1];
}

char right(int index) {
    return data[(index*2)+2];
}

//int ac = 0, bc = 0;
/*
void rec(int i) {
    char a = left(i);
    int ai = (i*2)+1;
    int b = right(i);
    int bi = (i*2)+2;

    if (a != 0) {
        printf(" %c", a);
        branch[br] = a;
        rec(ai);
        ac++;
        br++;
    }
    if (b != 0) {
        printf(" %c", b);
        branch[br] = b;
        rec(bi);
        bc++;
        br++;
    }
}
*/
int main()

{
    /*int prop;
    scanf("Insert All Branch Probability (2^n): %d", &prop);

    printf("Insert all branch number (include null as whitespace): ");
    for (int i = 0; i < prop; i++) scanf("%c", data);

    for (int i = 0; i < prop; i++) printf("%c", data);*/

    //rec(2);
    //printf("%s", branch[br-2]);

    string command;
    int index;
    /*while(1) {
        int c;
        scanf("%d", &c);
        rec(c);
    }*/
    while(1) {
        cin >> command >> index;
        if (command == "parent")
            cout << parent(index) << " at " << (index-1)/2 << endl;
        else if (command == "right")
            cout << right(index) << " at " << (index*2)+2 << endl;
        else if (command == "left")
            cout << left(index) << " at " << (index*2)+1 << endl;
    }
}
