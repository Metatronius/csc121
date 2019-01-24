#include <iostream>
using namespace std;
int main()
{
        string firstName = "John", lastName = "Smith";
        int id = 555;
        char grade = 'C';
        bool tuitionPaid = true;
        float gpa = 3.54;
        double hairSize = 0.000000036;
        cout << "\n STUDENT INFORMATION\n" << endl;
        cout << "First Name: \t" <<  firstName << " is stored at location " << &firstName << endl;
        cout << "Last Name: \t" << lastName << " is stored at location " << &lastName << endl;
        cout << "ID:\t\t" << id << " is stored at location " << &id << endl;
        cout << "GPA\t\t" << gpa << " is stored at location " << &gpa << endl;
        cout << "Hair Size: \t" << hairSize << " is stored at location " << &hairSize << endl;
        cout << "Grade: \t\t" << grade << " is stored at location " << &grade << endl;
        cout << "Tuition Paid: \t" << tuitionPaid << " is stored at location " << &tuitionPaid << endl;
        cout << "\nInteger size is: \t" << sizeof(int) << " bytes" << endl;
        cout << "\nFloat size is: \t\t" << sizeof(float) << " bytes" << endl;
        cout << "\nDouble size is: \t" << sizeof(double) << " bytes" << endl;
        cout << "\nCharacter size is: \t" << sizeof(char) << " bytes" << endl;
        cout << "\nShort size is: \t\t" << sizeof(short) << " bytes" << endl;
        cout << "\nLong size is: \t\t" << sizeof(long) << " bytes" << endl;
        cout << "\nBool size is: \t\t" << sizeof(bool) << " bytes" << endl;
        // cout << "\nPointer size is :\t" << sizeof(&grade) << " bytes" << endl;
        return 0;
}
