#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b; while(cin >> b) {a.append(b);}
    for (int o = 0; o < 2; o++) for (int i = 0; i < a.length(); i++) printf("%s ", a[i]);

    /*
    char a[100000];
    //for (int i = 0; i < 3; i++) {
    while(getchar() != EOF) {
        char b[100000];
        cin >> b;
        strcat(a,b);
    }
    for (int i = 0; i < 2; i++)
        for (int i = 0; i < strlen(a); i++)
            cout << a[i] << " ";

            */
    return 0;
}
