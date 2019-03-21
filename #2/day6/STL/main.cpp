#include <iostream>
#include <functional>

using namespace std;

function<int(int,int)> returnLambda() {
    return [] (int x, int y) {
        return x*y;
    };
}

int main()
{
    auto lf = returnLambda();
    cout << "call lf(5,6)=" << lf(5,6) << endl;
    return 0;
}
