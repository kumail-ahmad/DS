#include <iostream>
using namespace std;
int main()
{
    int a;
    int *ptr = &a;

    cout << "The address of a is " << ptr << "\n";
    cout << "The address of p is " << &ptr;
    return 0;
}