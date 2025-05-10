// Electricity bill calci
#include <iostream>
using namespace std;

int main()
{
    int totalUnits;
    double bill = 0;

    cout << "Enter the total units: ";
    cin >> totalUnits;

    if (totalUnits <= 50)
    {
        bill = totalUnits * 0.5;
    }
    else if (totalUnits <= 100)
    {
        bill = 50 * 0.5 + (totalUnits - 50) * 1.0;
    }
    else if (totalUnits <= 150)
    {
        bill = 50 * 0.5 + 50 * 1.0 + (totalUnits - 100) * 1.5;
    }
    else if (totalUnits <= 200)
    {
        bill = 50 * 0.5 + 50 * 1.0 + 50 * 1.5 + (totalUnits - 150) * 2.0;
    }

    else
    {
        bill = 50 * 0.5 + 50 * 1.0 + 50 * 1.5 + 50 * 2.0 + (totalUnits - 200) * 5.0;
    }

    cout << "Total bill: " << bill << endl;

    return 0;
}
