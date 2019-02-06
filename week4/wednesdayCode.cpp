#include <iostream>
using std ::cout;
int main()
{
    int x = 25;
    cout << "\nThe value of x is: " << x << "\n";
    cout << "The address of x is: " << &x << "\n";
    cout << "After post increment x is: " << x++ << "\n";
    cout << "After pre increment: " << ++x << "\n";
    cout << "After pre decrement: " << --x << "\n";
    cout << "After post decrement x is: " << x-- << "\n";
    cout << "\n The value of x is: " << x << "\n\n";
    return 0;
}