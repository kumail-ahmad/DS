#include <iostream>
using namespace std;
int main()
{
    string str1 = "kumail ";
    string str2 = "Ahmad";

    string str3 = str1 + str2;
    // concatenation
    cout << " concatenated string: " << str3 << endl;
    // compare
    cout << (str1 == str2) << endl;
    return 0;
}