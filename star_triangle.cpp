#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 4; i++) // rows
    {
        for (int j = 0; j < i + 1; j++) // items in each row
        {
            cout << "*";
        }

        cout << "\n";
    }
}