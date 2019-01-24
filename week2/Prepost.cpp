#include <iostream>
using namespace std;

int main()
{
        int x;
        x = 25;
        x = x+5;
        x++;
        cout << x << endl;
        cout << x++ << endl;
        cout << ++x << endl;
        cout << --x << endl;
        cout << x-- << endl;
        cout << x << endl;
        x = 100 - x++;
        cout << x << endl;
        return 0;
}
