#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    static float commission = 0.08,
                 fedTax = 0.16,
                 socSec = 0.06,
                 retirement = 0.08;
    int sales;
    double grossPay, takeHomePay, totalDeductions;
    printf("Please enter your weekly sales: ");
    cin >> sales;
    grossPay = commission * sales;
    cout << fixed << setprecision(2);
    cout << "\nTotal Sales:\t" << sales << "\n\n";
    cout << "GrossPay(" << commission << "):\t" << setw(8) << grossPay << "\n";
    cout << "Federal Tax paid(" << fedTax << "):\t" << grossPay * fedTax << "\n";
    cout << "Social Security paid(" << socSec << "):\t" << grossPay * socSec << "\n";
    cout << "Retirement contribution(" << retirement << "):\t" << grossPay * retirement << "\n\n";
    totalDeductions = grossPay * (fedTax + socSec + retirement);
    takeHomePay = grossPay - totalDeductions;

    cout << "Total Deduction:\t" << totalDeductions << "\n\n";
    cout << "Take Home Pay:\t" << takeHomePay << "\n";

    return 0;
}