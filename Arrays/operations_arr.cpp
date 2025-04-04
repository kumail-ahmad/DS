#include <iostream>
using namespace std;

void sumOfArr(int arr[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum of Elements in array is :" << sum << endl;
};
void productOfArr(int arr[], int size)
{
    int prod = 1;
    for (int i = 0; i < size; i++)
    {
        prod = prod * arr[i];
    }
    cout << "The product of array will be :" << prod << endl;
}
int main()
{
    int arr[] = {2, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumOfArr(arr, size);
    productOfArr(arr, size);
    return 0;
}