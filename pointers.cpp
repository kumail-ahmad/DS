#include <iostream>
using namespace std;
int main()
{
    int a;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << "The address of a is " << ptr << "\n";
    cout << "The address of p is " << &ptr << "\n";
    cout << ptr2;
    return 0;
}