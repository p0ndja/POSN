#include <stdio.h>
#include <iostream>

using namespace std;

int winBef;

int prop(string c, int w, int l) {
    if (w == winBef || l == winBef) { //Reach Winning Score
        cout << c << endl;
        return 0;
    }
    prop(c + " W", w + 1, l);
    prop(c + " L", w, l + 1);
}

main() {
    int a, b, maxProp;
    scanf("%d %d %d",&winBef,&a,&b);
    prop("W", a + 1, b);
    prop("L", a, b + 1);
}
