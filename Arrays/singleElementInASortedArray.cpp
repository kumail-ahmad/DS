#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int start = 0, end = arr.size();
    int mid = start + (end - start) / 2;
    for (int i = 0; i < end; i++)
    {
        if (mid % 2 == 0)
        { // even case
            if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else if (mid % 2 != 0)
            {
                if (arr[mid - 1] = arr[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
        }
        else
        {
            // odd case
            if (arr[mid] == arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return 0;
}