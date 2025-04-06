#include <iostream>
using namespace std;
int main()
{
    int currentSum = 0;
    int maxSum = INT_MIN;
    int size = 5;
    int arr[5] = {-2, 1, -3, 4, -1};
    for (int i = 0; i < size; i++)
    {
        currentSum = currentSum + arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "The maximum sum of the subarray is: " << maxSum << endl;
}
