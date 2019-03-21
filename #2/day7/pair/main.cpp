#include <bits/stdc++.h>

using namespace std;

int getId(int i) {
}

int getId(string i) {
}

int main()
{
    set<pair<string,int>> ps = {{"A",40},{"B",50},{"C",60}};
    auto data = make_pair("D",60);
    ps.insert(data); //Important!!
    ps.insert({"F",60}); //Important!!

    for (auto& e: ps)
    {
        cout << "Key: " << e.first;
        cout << " Value: " << e.second << endl;
    }

    auto item = make_pair("B", 50);
    auto it = ps.find(item);
    string mkey = "C";
    if (it != ps.end())
        cout << "Found " << it -> first << endl;
    cout << it -> second << endl;
    auto it_key = find_if(ps.cbegin(), ps.cend(),
                          [&]
                          (pair<string,int> const & t)
    {
        return t.first.compare(mkey) == 0;
    });
    if (it_key != ps.cend())
        cout << "found (by key) " << it_key -> first;
    else
        cout << "not found";

}
