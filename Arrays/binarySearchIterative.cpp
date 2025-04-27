#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int target = 12;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            cout << "Target found at index : " << mid << endl;
            break;
        }
    }

    return 0;
}