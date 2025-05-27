#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int student = 1, pages = 0;

    for (int i = 01; i < n; i++)
    {
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages = pages + arr[i];
        }
        else
        {
            student++;
            pages = arr[i];
        }
    }
}

int allocateBooks(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1; // Not enough books for students
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0;
    int end = sum, ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValid(arr, n, m, mid))
        {
            // valid -left
            ans = mid;
            end = mid - 1;
        }
        else
        {
            // invalid - right
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}