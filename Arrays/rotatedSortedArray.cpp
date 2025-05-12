#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int start = arr[0];
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
        }
        else
        { // right
        }
    }
    return 0;
}