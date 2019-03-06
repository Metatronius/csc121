#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void Header(string);

int main()
{
    Header("\nThis value is passed to the function\n");
    string title = "\nNOW This value is passed to the function\n";
    cout << title << endl;
    Header(title);
    cout << title << endl;
    return 0;
}

void Header(string T)
{
    cout << T << endl;
}