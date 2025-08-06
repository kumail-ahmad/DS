#include <iostream>
using namespace std;
int main()
{ // string array
    string str1 = "kumail";
    int start = 0, end = str1.length() - 1;
    while (start <= end)
    {
        swap(str1[start], str1[end]);
        start++;
        end--;
    }
    cout << "Reversed string: " << str1 << endl;
    return 0;
}