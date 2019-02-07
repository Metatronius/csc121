#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    static float commission = 0.08,//commission rate
                 fedTax = 0.16,	   //used for calculating decuctions
                 socSec = 0.06,	   //used for calculating decuctions
                 retirement = 0.08;//used for calculating decuctions
    int sales;					   //total made in sales
    double grossPay, takeHomePay, totalDeductions;
    printf("Please enter your weekly sales: ");
    cin >> sales;
    grossPay = commission * sales; //calculate total grossPay based off of commission and sales
    cout << fixed << setprecision(2);
    cout << "\nTotal Sales:\t" << sales << "\n\n";
    cout << "GrossPay(" << commission << "):\t" << setw(8) << grossPay << "\n";
    cout << "Federal Tax paid(" << fedTax << "):\t" << grossPay * fedTax << "\n";
    cout << "Social Security paid(" << socSec << "):\t" << grossPay * socSec << "\n";
    cout << "Retirement contribution(" << retirement << "):\t" << grossPay * retirement << "\n\n";
    totalDeductions = grossPay * (fedTax + socSec + retirement); //determine the total deductions
    takeHomePay = grossPay - totalDeductions;					 //subtract our deductions from grossPay 

    cout << "Total Deduction:\t" << totalDeductions << "\n\n";
    cout << "Take Home Pay:\t" << takeHomePay << "\n";

    return 0;
}