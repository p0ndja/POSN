#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int> m; //Pair with Key + Value
    m.insert({"Apple", 20});
    m.insert({"Banana", 10});
    m.insert(make_pair("Mango", 15));
    for (auto e : m) {
        cout << e.first << " ";
        cout << e.second << endl;
    }
    map<string,int>::iterator it = m.begin();
    cout << it -> first << endl;
    cout << it -> second << endl;

    vector<string> words;
    words.push_back("Computer");
    words.push_back("make");
    words.push_back("make");
    transform(words.begin(), words.end(), words.begin(),
              [&] (string x) -> string {
              for (int i  = 0; i < x.length(); i++) {
                    x[i] = tolower(x[i]);
              return x;
              }
              }
              );
    sort(words.begin(), words.end());

    int cc = 0;
    map<string, int> ww;
    for (auto e: words) {
        auto fk = ww.find(e);
        if (fk == ww.end()) {
            cc = 1;
            ww.insert({e, cc});
        } else {
            cc = fk -> second + 1;
            ww.erase(e);
            ww.insert({e, cc});
        }
    }

    printf("\nCount \'Apple\': %d", m.count("Apple"));

}
