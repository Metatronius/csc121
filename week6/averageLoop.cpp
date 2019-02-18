#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    uint numberToAverage;
    printf("How many numbers to average: ");
    cin >> numberToAverage;
    double temp;
    double total;
    for (int i = 1; i <= numberToAverage; i++)
    {
        switch (i % 10)
        {
        case 1:
            printf("Enter the %dst number: ", i);
            break;
        case 2:
            printf("Enter the %dnd number: ", i);
            break;
        case 3:
            printf("Enter the %drd number: ", i);
            break;
        default:
            printf("Enter the %dth number: ", i);
        }
        cin >> temp;
        total += temp;
    }
    printf("The average of your numbers is %.2f", total / numberToAverage);
}