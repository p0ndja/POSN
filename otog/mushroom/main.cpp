#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int, less<int>> mushroom;
    int c, length, height; scanf("%d %d %d", &c, &length, &height);
    for (int i = 0; i < c; i++) {
        int input; scanf("%d", &input);
        for (int o = 0; o < input; o++) {
            int ooo; scanf("%d", &ooo); mushroom.insert(ooo);
        }

        int sunLength, sunHeight;
        scanf("%d %d", &sunLength, &sunHeight);


        if (sunHeight == 0) {
            mushroom.erase(mushroom.begin(), mushroom.end());
        } else {
            int deathzone = (sunLength*height)/sunHeight;
            mushroom.erase(mushroom.lower_bound(length + deathzone), mushroom.end());
        }
        printf("%d\n", mushroom.size());
    }
    return 0;
}
