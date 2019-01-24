#include <iostream>
#include <iomanip>
using namespace std;

const float ROI = 3.5;

int main ()
{
        float amount, interest, endOfYrBal;
        cout << "Please enter the amount of CD: ";
        cin >> amount;
        interest = amount * (ROI/100);
        endOfYrBal = amount + interest;

        cout << fixed << showpoint << setprecision(2);

        cout << "At the end of one year the new balance is: " << setw(5) << endOfYrBal << endl << endl;
        return 0;
}
