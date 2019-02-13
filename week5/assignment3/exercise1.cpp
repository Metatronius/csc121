//Program to determine the smaller of two numbers
#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int num1;
    int num2;
    cout << "Please enter the first number: "
         << "\n";
    cin >> num1;
    cout << "Please enter the second number: "
         << "\n";
    cin >> num2;

    if (num1 < num2)
    {
        cout << "The smallest value is " << num1;
    }
    else if (num1 == num2)
    {
        cout << "They are equal";
    }
    else
    {
        cout << "The smallest value is " << num2;
    }
    return 0;
}