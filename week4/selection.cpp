#include <iostream>
using std::cin;
int main()
{
    int score;
    printf("Enter your score: ");
    cin >> score;
    if (score == 100)
    {
        printf("Score is perfect!!!\nBravo!!\nGreat!!!\n\n");
    }
    if (score % 2)
    {
        printf("Score is odd!\n\n");
    }
    else
    {
        printf("Score is even!\n\n");
    }
    switch (score % 2)
    {
    case 0:
        printf("Score is even!!\n\n");
        break;
    default:
        printf("Score is odd!\n\n");
    }
    switch (score)
    {
    case 90 ... 100:
        printf("Letter Grade is A");
        break;
    case 80 ... 89:
        printf("Letter Grade is B");
        break;
    case 70 ... 79:
        printf("Letter Grade is C");
        break;
    case 60 ... 69:
        printf("Letter Grade is D");
        break;
    default:
        printf("Letter Grade is F")
    }
    switch (score)
    {
    case 0 ... 59:
        printf("Letter Grade is F");
        break;
    case 60 ... 69:
        printf("Letter Grade is D");
        break;
    case 70 ... 79:
        printf("Letter Grade is C");
        break;
    case 80 ... 89:
        printf("Letter Grade is B");
    default:
        printf("Letter Grade is A");
    }

    //This shit right here is a hot mess of nested elses that aren't necessary.
    if ((score >= 90) && (score <= 100))
        cout << "Your Grade is A.\n";
    else
    {
        if ((score >= 80) && (score < 90))
            cout << "Your grade is B.\n";
        else
        {
            if ((score >= 70) && (score < 80))
                cout << "Your grade is C.\n";
            else
            {
                if ((score >= 60) && (score < 70))
                    cout << "Your grade is C.\n";
                else
                {
                    cout << "Your gradeis F.\n";
                }
            }
        }
    }
    return 0;
}