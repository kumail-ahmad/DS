#include <iostream>
using namespace std;
int main()
{
    int base = 5, pow = 3, result = 1;
    for (int i = 0; i < pow; i++)
    {
        result = result * base;
    }
    cout << base << "^" << pow << "=" << result << endl;
    return 0;
}