#include <iostream>
using namespace std;

void changeA(int *ptr)
{
    *ptr = 25;
}
int main()
{
    int a = 10;
    int *ptr = &a;
    changeA(ptr);

    cout << a << endl;
    return 0;
}