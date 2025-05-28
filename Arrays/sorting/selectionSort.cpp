#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, n);
    
    return 0;
}