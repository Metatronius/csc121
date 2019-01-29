#include <iostream>
// #include <string>
// using std::cout;
int main()
{
    //because these are string constants we can initate them as an array of character pointers and not have to use std::string
    char s1[] = "*   *   *   *   *   *",
         s2[] = "  *   *   *   *   *  ",
         s3[] = "_____________________________\n",
         s4[] = "__________________________________________________\n";
    //cout << s4 << s1 << s3 << s2 << s3;
    printf("%s%s%s%s%s", s4, s1, s3, s2, s3);
    //print pattern one 3 times
    for (char i = 0; i < 3; i++)
    {
        //cout << s1 << s3 << s2 << s3;
        printf("%s%s%s%s", s1, s3, s2, s3);
    }
    //print pattern two 3 times
    for (char i = 0; i < 5; i++)
    {
        //cout << s4
        printf("%s", s4);
    }
    return 0;
}