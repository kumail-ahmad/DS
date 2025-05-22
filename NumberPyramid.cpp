#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        cout << "\n";
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        cout << "\n";
    }

    return 0;
}