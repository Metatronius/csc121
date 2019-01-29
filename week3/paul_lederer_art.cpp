#include <iostream>
// #include <string>
// using std::cout;
int main()
{
    char s1[] = "*   *   *   *   *   *",
         s2[] = "  *   *   *   *   *  ",
         s3[] = "_____________________________\n",
         s4[] = "__________________________________________________\n";
    printf("%s%s%s%s%s", s4, s1, s3, s2, s3);
    for (char i = 0; i < 3; i++)
    {
        printf("%s%s%s%s", s1, s3, s2, s3);
    }
    for (char i = 0; i < 5; i++)
    {
        printf("%s", s4);
    }
    return 0;
}