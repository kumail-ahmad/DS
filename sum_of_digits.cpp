#include <iostream>
using namespace std;
int main()
{
    int sumdigits = 0;
    int n = 15;

    while (n > 0)
    {
        int lastDig = n % 10;
        n = n / 10;
        sumdigits += lastDig;
    }
    cout << "Sum of digits is:" << sumdigits << endl;

    return 0;
}