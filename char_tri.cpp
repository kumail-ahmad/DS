#include <iostream>
using namespace std;
int main()
{
    char charac = 'A';
    int n = 102;
    for (int i = 97; i < n; i++)
    {
        for (int j = 0; j < i - 96; j++)
        {
            cout << char(i);
            charac++;
        }

        cout << "\n";
    }

    return 0;
}