#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    int start = 1;
    int target = 9;
    int end = arr.size() - 2;
    int mid = start + (end - start) / 2;
    while (arr[start] <= arr[end])
    {
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        if (arr[mid - 1] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Target Found at index : " << mid + 1 << endl;
    return 0;
}