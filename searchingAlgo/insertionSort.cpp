#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{

    for (int i = 1; i < n; i++)
    {
        int prev = i - 1;
        int curr = arr[i];

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = arr.size();
    insertionSort(arr, n);
    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}