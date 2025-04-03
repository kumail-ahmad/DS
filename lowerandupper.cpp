#include <iostream>
using namespace std;
int main()
{
    // to check for lowercase and   uppercase
    char n;
    cout << "enter your character  ";
    cin >> n;
    if (n >= 'a' && n <= 'z')
    {
        cout << "The character enetered is lowercase";
    }
    else
    {
        cout << "The character entered is uppercase ";
    }
}