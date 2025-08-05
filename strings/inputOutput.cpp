#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout << "enter a string:" << endl;
    cin.getline(str, 100);
    // cout << "your output is : " << str;

    for (char ch : str)
    {
        cout << ch << " ";
    }

    return 0;
}