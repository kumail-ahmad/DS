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
    cout << "are the string same: " << (str1 == str2) << endl;
    // length
    cout << " The length of the string is: " << str1.length() << endl;
    return 0;
}