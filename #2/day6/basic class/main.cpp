#include <bits/stdc++.h>

using namespace std;

//--------------------------- OLD C ----------------------------
// &L -> Index of L
// *L -> Pointer

typedef struct {
    char name[50];
    int volume;
} bottle;

void volume_add(bottle *a, int i) {
    a -> volume += i; //or *a.volume += i;
}


//---------------------- NEW C++ ------------------------------
class Bottle {
    private: //Can be recall from any function //Like Bottle.volume;
        string name;
        int volume;
    public:
        void set_vol(int i) {
            volume = i;
        }
        int get_vol() {
            return volume;
        }
};

int main()
{
    bottle L;
}
