#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = arr.size();
    int start = 0, end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        // edge case
        if (mid == 0 && arr[0] != arr[1])

        {
            cout << arr[mid] << endl;
            return 0;
        }
        if (mid == n - 1 && arr[n - 1] != arr[n - 2])

        {
            cout << arr[mid] << endl;
            return 0;
        }
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
        {
            cout << arr[mid] << endl;
            return 0;
        };

        if (mid % 2 == 0)
        { // even case

            if (arr[mid - 1] == arr[mid])
            {
                end = mid - 1; // left
            }
            else
            {
                start = mid + 1; // right
            }
        }
        else
        {
            // odd case
            if (arr[mid - 1] == arr[mid])
            {
                start = mid + 1; // right
            }
            else
            {
                end = mid - 1; // left
            }
        }
    }
    cout << "element found index:" << arr[mid] << endl;
    return -1;
}