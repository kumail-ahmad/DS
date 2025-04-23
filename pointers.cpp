#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;

    int *nulptr = NULL;

    cout << "The address of a is " << ptr << "\n";

    cout << "The value of a is " << *(&a) << "\n"; // using dereference operator to get the value of a

    cout << "The address of p is " << &ptr << "\n";

    cout << **(ptr2) << endl; // double derefrencing operator - to get value of a

    cout << nulptr;
    return 0;
}