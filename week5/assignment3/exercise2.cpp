#include <iostream>
using std::cin;
using std::cout;

int main()
{
    double purchase;

    cout << "Enter a purchase amount to find out you shipping charges.\n\n";
    cout << "Please enter the amount of your purchase: ";
    cin >> purchase;
    printf("The shipping charge on a purchase of $%.2f is $", purchase);
    if (purchase <= 250)
    {
        cout << "5.00";
    }
    else if (purchase <= 500)
    {
        cout << "8.00";
    }
    else if (purchase <= 1000)
    {
        cout << "10.00";
    }
    else if (purchase <= 5000)
    {
        cout << "15.00";
    }
    else
    {
        cout << "20.00";
    }
    return 0;
}