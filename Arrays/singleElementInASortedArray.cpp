#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int start = 0, end = arr.size();
    for (int i = 0; i < end; i++)
    {
        if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
        {
            cout << "The number is at index :" << i;
        }
    }
    return 0;
}