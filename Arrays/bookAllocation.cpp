#include <iostream>
#include <vector>
using namespace std;

int allocateBooks(vector<int> &arr, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0;
    int end = sum, ans = -1;

    while (start<=end)
    {
        int mid=start +(end-start)/2;
        
    }
    
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}