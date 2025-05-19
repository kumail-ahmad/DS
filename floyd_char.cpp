#include <iostream>
using namespace std;
// Floyd's triangle with characters
// Floyd's triangle is a right-angled triangular array of natural numbers
// that is used in number theory and combinatorial mathematics.
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