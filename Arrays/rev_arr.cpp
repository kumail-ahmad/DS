// reverse an array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 43, 532, 45, 35, 324, 4, 73, 24, 32};
    int size = 10;
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }
    for (int j = 0; j < size; j++)
    {

        cout << arr[j] << ",";
    }

    // cout << sizeof(arr) << endl;
}