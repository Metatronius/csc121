#include <iostream> //cout, cin
using std::cin;
using std::cout;
int main()
{
    int time1, time2, timeBetween, hoursBetween, minutesBetween; //Variable declaration
    cout << "Please enter the first time: ";
    cin >> time1; //receives the first time
    cout << "Please enter the second time: ";
    cin >> time2;                                                          //receives the second time
    timeBetween = abs(time1 - time2);                                      //find the absolute difference between the times.
    hoursBetween = timeBetween / 100;                                      //calculates difference in hours
    minutesBetween = timeBetween % 100;                                    //calculates difference in minutes
    cout << hoursBetween << " hours and " << minutesBetween << " minutes"; //displays output
}