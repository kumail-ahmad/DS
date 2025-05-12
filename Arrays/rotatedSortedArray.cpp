#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int start = 0;
    int target = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        };
        if (arr[start] <= arr[mid])
        { // left
            if (arr[start] <= target && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        { // right
            if (arr[mid] <= target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        cout << "Target at index :" << mid << endl;
    }
    return -1; // target was not found
}