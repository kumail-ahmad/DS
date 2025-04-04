#include <iostream>
using namespace std;

int minNo(int arr[], int size)
{
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    };
    return smallest;
}

int maxNo(int arr[], int size)
{
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    };
    return largest;
}
int main()
{
    int arr[] = {12, 43, 53, 23, 76};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << minNo(arr, size) << endl;
    cout << maxNo(arr, size) << endl;

    int minVal = minNo(arr, size);
    int maxVal = maxNo(arr, size);

    int minIndex = -1, maxIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == minVal)
            minIndex = i;
        if (arr[i] == maxVal)
            maxIndex = i;
    }

    if (minIndex != -1 && maxIndex != -1)
    {
        int temp = arr[minIndex];
        arr[minIndex] = arr[maxIndex];
        arr[maxIndex] = temp;
    }

    cout << "Array after swapping min and max values:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}