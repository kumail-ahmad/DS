#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    int start = 0;
    int target = 9;
    int end = arr.size() - 1;
    while (arr[start] <= arr[end])
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            /* code */
        }
    }

    return 0;
}