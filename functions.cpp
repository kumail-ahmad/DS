#include <iostream>
using namespace std;

void printhello()
{
    cout << "Hello, World!";
}
int sum(int a, int b)
{
    return a + b;
}
int minoftwo(int a, int b)
{
    return a > b ? b : a;
}
int main()
{
    printhello();
   cout << "\nSum of 2 and 3: " << sum(2, 3);
    cout << "\nMinimum of 5 and 17: " << minoftwo(5, 17);
    return 0;
}