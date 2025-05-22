#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= 2 * i - 1; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}