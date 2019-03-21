#include <bits/stdc++.h>

using namespace std;

/*
    THANKS TO PEERAPHOL FOR 'REVERSE' FUNCTION
*/

/*
TEST CASE
5
TAAPN
RESULT: PANTA

11
IMMGNOPRAGR
RESULT: PROGRAMMING
*/

void code(auto a, auto b) {
    int length = b - a;
    if (length != 1) {
        reverse(a,b);
        code(a,b-(length/2));
        code(b-(length/2),b);
    }
}


int main()
{
    int n; string a; cin >> n >> a;
    code(a.begin(), a.end());
    cout << a;
}
