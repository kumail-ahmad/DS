#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3};
    int n = arr.size();

    // find the pivot

    int pivot = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            pivot = i;
            break;
        }
    }
    for (int i = n - 1; i > pivot; i--)
    {
        if (arr[i] > arr[pivot])
        {
            swap(arr[i], arr[pivot]);
            break;
        }
    }
    return 0;
}