#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int a = 10;
    int *ptr1;
    int *ptr3 = ptr1;
    

    int *ptr2 = ptr1 + 2;
    // subtarction
    cout << ptr2 - ptr1 << endl;

    // comparison of pointers
    cout << (ptr1 == ptr2) << endl;
    cout << (ptr1 == ptr3) << endl;
    cout << (ptr1 < ptr3) << endl;
    cout << (ptr1 > ptr3) << endl;
    cout << (ptr1 <= ptr3) << endl;
    cout << (ptr1 >= ptr3) << endl;
    cout << (ptr1 != ptr3) << endl;

    return 0;
}