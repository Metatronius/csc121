#include <iostream>
using namespace std;

int main()
{
    string grade;
    cout << "Enter your letter grade: ";
    cin >> grade;
    char letter = grade[0];
    char plusOrMinus = grade[1];
    float gpa = 0;

    switch (letter)
    {
    case 'A':
    case 'a':
        gpa = 4;
        break;
    case 'B':
    case 'b':
        gpa = 3;
        break;
    case 'C':
    case 'c':
        gpa = 2;
        break;
    case 'D':
    case 'd':
        gpa = 1;
    }
    if (gpa != 0)
    {
        if (plusOrMinus == '+' && letter != 'A')
        {
            gpa += .3;
        }
        else if (plusOrMinus == '-')
        {
            gpa -= .3;
        }
    }

    printf("The numeric value is %.1f", gpa); //output formatted to be X.Y
    // cout << "The numeric value is " << gpa;

    return 0;
}