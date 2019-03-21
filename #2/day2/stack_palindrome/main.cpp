#include <iostream>
#include <string.h>

using namespace std;

char a[100];
int length;
int lo;

void pop() {
    lo--;
    :("%c", a[lo+1]);
}

int main()
{
    cin >> a;
    length = strlen(a);
    lo = length;
    for (int i = 0; i < (length/2) + 2; i++) {

    }
    cout << a;
    return 0;
}
