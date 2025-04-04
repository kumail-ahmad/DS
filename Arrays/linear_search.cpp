#include <iostream>
using namespace std;
int main()
{
    int arr[] = {
        12, 43, 67, 76, 80};
    int target = 80, size = 5;
    for (int i = 0; i < size; i++)
    {
        // cout << arr[i] << endl;
        if (arr[i] == target)
        {
            cout << "target was found at " << i << endl;
        }
    };
    return -1;
}