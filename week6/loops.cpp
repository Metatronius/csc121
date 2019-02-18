#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int loop(char again, int num)
{
    if (again == 'y' || again == 'Y')
    {
        cout << "The value of number is: " << num++ << endl;
        cout << "Do you want to print another number? ";
        cin >> again;
        loop(again, num);
    }
    return 0;
}
int main()
{
    // int num = 1;
    // char again;
    // cout << "Please enter the value of continue(y/n): ";
    // cin >> again;
    // cout << again;
    // while (again == 'Y' || again == 'y')
    // {
    //     cout << "The value of number is: " << num++ << endl;
    //     cout << "Do you want to print another number? ";
    //     cin >> again;
    // }
    char gain = 'Y';
    int no = 1;
    do
    {
        cout << "The number is: " << no << endl;
        no--;
        cout << "Do you want to print another number? ";
        cin >> gain;
    } while (gain == 'Y' || gain == 'y');
    // loop(again, num);
    cout << endl;
    return 0;
}