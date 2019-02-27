#include <iostream>
#include <string>
using std::cin;
using std::string;
int main()
{
    bool flag = false;
    uint number;
    string numeral;
    printf("Enter a positive integer: ");
    cin >> number;
    switch (number / 1000)
    {
    case 3:
        numeral += "M";
    case 2:
        numeral += "M";
    case 1:
        numeral += "M";
    }
    number %= 1000;
    if (number / 500)
    {
        numeral += "D";
        flag = true;
        number %= 500;
    }
    switch (number / 100)
    {
    case 3:
        numeral += "C";
    case 2:
        numeral += "C";
    case 1:
        numeral += "C";
        break;
    case 4:

        if (flag)
        {
            numeral.pop_back();
            numeral += "CM";
        }

        else
        {
            numeral = "CD";
        }
    }
    flag = false;
    number %= 100;
    if (number / 50)
    {
        numeral += "L";
        number %= 50;
        flag = true;
    }
    switch (number / 10)
    {
    case 3:
        numeral += "X";
    case 2:
        numeral += "X";
    case 1:
        numeral += "X";
        break;
    case 4:
        if (flag)
        {
            numeral.pop_back();
            numeral += "XC";
        }
        else
        {
            numeral += "XL";
        }
    }
    flag = false;
    number %= 10;
    if (number / 5)
    {
        numeral += "V";
        flag = true;
        number %= 5;
    }
    switch (number % 5)
    {
    case 3:
        numeral += "I";
    case 2:
        numeral += "I";
    case 1:
        numeral += "I";
        break;
    case 4:
        if (flag)
        {
            numeral.pop_back();
            numeral += "IX";
        }
        else
        {
            numeral += "IV";
        }
    }
    std::cout << numeral;
    return 0;
}