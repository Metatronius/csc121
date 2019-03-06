#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double totalScore = 0;
    int numDivers = 1, currentDiver = 0;
    cout << "\t\t\tReport to the media\n";
    cout << "Event: Diving competition\n\n";
    cout << fixed << setprecision(2);
    do
    {
        currentDiver++;
        string name, city;
        cout << "Enter the diver's name: ";
        getline(cin, name);
        cout << "Enter the diver's city: ";
        cin >> city;
        double highestScore, lowestScore, tempScore = 0, score, difficulty;
        int judgeNumber = 0;
        do
        {
            judgeNumber++;
            cout << "Enter score given by judge #" << judgeNumber << ": ";
            cin >> score;
            if (score < 0 || score > 10)
            {
                cout << "Invalid score - Please reenter (Valid Range: 0-10)\n";
                judgeNumber--;
            }
            else
            {
                tempScore += score;
                if (judgeNumber == 1)
                {
                    highestScore = score;
                    lowestScore = score;
                }
                else
                {
                    if (score > highestScore)
                        highestScore = score;
                    if (score < lowestScore)
                        lowestScore = score;
                }
            }
        } while (judgeNumber < 5);
        do
        {
            cout << "What was the degree of difficulty? ";
            cin >> difficulty;
            if (difficulty < 1 || difficulty > 1.67)
                cout << "Invalid degree of difficulty - Please reenter (Valid Range: 1-1.67)\n";
        } while (difficulty < 1 || difficulty > 1.67);

        tempScore = (tempScore - highestScore - lowestScore) / 3 * difficulty;

        cout << "\nDiver: " << name << ", City: " << city << "\n";
        cout << "Overall score was " << tempScore << "\n\n";

        totalScore += tempScore;

        cout << "Do you want to process another diver (Y/N)? ";
        char again;
        cin >> again;
        switch (again)
        {
        case 'n':
        case 'N':
            break;
        case 'y':
        case 'Y':
            numDivers++;
            break;
        }
        cin.ignore();
    } while (currentDiver < numDivers);

    totalScore /= numDivers;

    cout << "\n\tEVENT SUMMARY\nNumber of divers participating: " << numDivers << "\nAverage score of all divers: " << totalScore;
    return 0;
}
