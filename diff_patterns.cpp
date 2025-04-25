#include <iostream>
using namespace std;
int main()
//paterns in cpp
{
    int numinc = 1;
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << numinc;
            numinc++;
        }
 
        cout << "\n";
    }
}