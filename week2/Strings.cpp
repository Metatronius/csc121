#include <iostream>
#include <string>
using namespace std;
int main()
{
        int stdId = 0;
        string name = "";
        double gpa = 0.0;
        cout << "\nPlease enter the values......." << endl;
        cout << "Enter the ID: ";
        cin >> stdId;
        cin.ignore();
        cout << "Enter the full name: ";
        // cin >> name;
        getline(cin, name);
        cout << "Enter the gpa: ";
        cin >> gpa;
        cout << "\nHere are the values " << endl;
        cout << "Student ID:\t" << stdId << endl;
        cout << "Student Name:\t" << name << endl;
        cout << "Student GPA:\t" << gpa << endl
             << endl;
             //length returns the length of a string
        cout << "Length of student name:\t" << name.length() << endl;
        string fname = name.substr(0, 7), lname = name.substr(8);
        cout << "Student first name:\t\t\t" << fname << endl;
        cout << "Student last name:\t\t\t" << lname << endl;
        cout << "My sister's name\t" << name.substr(0, 2) << name.substr(5, 2) << endl;
        cout << "Using concatenation to get full name:\t" << fname + " " + lname << endl;
        string first = "one";
        string second = "two";
        cout << "Before swap:\n first: " << first << "\n second: " << second << endl;
        first.swap(second);
        cout << "\n\nAfter swap:\n first: " << first << "\nsecond: " << second << endl;
        first.swap(fname);
        cout << "\n\nAfter swap:\n first: " << first << "\nfname: " << fname << endl;
        return 0;
}
