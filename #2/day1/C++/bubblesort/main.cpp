#include <iostream>

using namespace std;

int main()
{
    int count; cin >> count;

    int data[count];
    for (int i = 0; i < count; i++) cin >> data[i];
    for (int i = 0; i < count; i++) for (int i = 0; i < count; i++)
        if (data[i] > data[i+1]) {
            int temp = data[i];
            data[i] = data[i+1];
            data[i+1] = temp;
        }

    for (int i = 0; i < count; i++) cout << data[i] << ends;
    return 0;
}
