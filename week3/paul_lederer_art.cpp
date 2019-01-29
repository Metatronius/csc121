#include "stdio.h"
// #include <string>
// using std::cout;
int main()
{
    char s1[] = "*   *   *   *   *   *",
         s2[] = "  *   *   *   *   *  ",
         s3[] = "_____________________________\n",
         s4[] = "__________________________________________________\n";
    // cout << s4 << s1 << s3 << s2 << s3;
    // cout << s1 << s3 << s2 << s3;
    // cout << s1 << s3 << s2 << s3;
    // cout << s1 << s3 << s2 << s3;
    // cout << s4 << s4 << s4 << s4 << s4;
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", s4, s1, s3, s2, s3, s1, s3, s2, s3, s1, s3, s2, s3, s1, s3, s2, s3, s4, s4, s4, s4, s4);
    return 0;
}