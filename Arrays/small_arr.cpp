
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 64, 13, -45, 7};
    int size = 5;
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < smallest)
        // {
        //     smallest = arr[i];
        // }
        smallest = min(arr[i], smallest);
    };
    cout << smallest << endl;

};