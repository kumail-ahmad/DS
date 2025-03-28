#include <iostream>
using namespace std;
// recursive fibonacci function
int fibno(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return (n - 1) + (n - 2);
}
int main()
{
    int n = 5;
    cout << fibno(n);
    return 0;
};