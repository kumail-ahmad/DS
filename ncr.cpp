#include <iostream>
using namespace std;
int factCal(int n, int r)
{
    int nfact = 1;
    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }
    // cout << nfact;
    int rfact = 1;
    for (int i = 1; i <= r; i++)
    {
        rfact = rfact * i;
    }
    // cout << rfact;
    int diff = n - r;
    int diff_factorial = 1;
    for (int i = 1; i <= diff; i++)
    {
        diff_factorial = diff_factorial * i;
    }
    // cout << diff_factorial;
    int formula = nfact / (rfact * diff_factorial);
    return formula;
}
int main()
{
    cout << factCal(8, 2)
         << "\n";
    cout << factCal(6, 3);
    return 0;
}