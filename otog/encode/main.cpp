#include <bits/stdc++.h>

using namespace std;

/*
    THANKS TO PEERAPHOL FOR 'REVERSE' FUNCTION
*/

/*
TEST CASE
5
PANTA
RESULT: TAANP

11
PROGRAMMING
RESULT: IMMGNOPRAGR
*/

void code(auto a, auto b) {
    int length = b - a;
    if (length != 1) {
        code(a,b-(length/2));
        code(b-(length/2),b);
        reverse(a,b);
    }
}


int main()
{
    int n; string a; cin >> n >> a;
    code(a.begin(), a.end());
    cout << a;
}
