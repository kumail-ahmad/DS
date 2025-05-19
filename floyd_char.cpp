#include <iostream>
using namespace std;
// Floyd's triangle with characters
int main()
{
    int num = 1;
    char chr = 'A';
    for (int i = 96; i < 102; i++)
    {
        for (int j = 0; j < i - 95; j++)
        {
            cout << chr;
            chr++;
        }
        cout << endl;
    }

    return 0;
}