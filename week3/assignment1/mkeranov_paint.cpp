#include <iostream>
using namespace std;

int main()
{
    double roomLenght = 10;
    double roomWidth = 10;
    double roomHeight = 8;

    double squareFeetPerGalon = 10;
    double squareFeet = 2 * (roomLenght * roomHeight) + 2 * (roomHeight * roomWidth) + roomLenght * roomWidth;

    double paintNeeded = squareFeet / squareFeetPerGalon;

    cout << paintNeeded;

    return 0;
}