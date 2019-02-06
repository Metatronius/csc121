// a solution to toDigits
#include <iostream>
using namespace std;
int main()
{
    int input;
    cout << "Enter an integer: ";
    cin >> input;
    cout << input / 10000 << "  ";
    cout << input % 10000 / 1000 << "  ";
    cout << input % 10000 % 1000 / 100 << "  ";
    cout << input % 10000 % 1000 % 100 / 10 << "  ";
    cout << input % 10 << "  ";
    return 0;
}