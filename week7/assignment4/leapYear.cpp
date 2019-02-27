#include <iostream>
using std::cin;
int main()
{
    int year;
    printf("Please enter a year: ");
    cin >> year;
    if (!(year % 4) && ((year % 100) || !(year % 400)))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}