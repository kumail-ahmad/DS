#include <iostream>
using namespace std;
int main()
{
    int zero = 0, one = 0, two = 0;
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++) // O(n) time complexity, O(1) space complexity
    {
        if (arr[i] == 0)
            zero++;

        else if (arr[i] == 1)
            one++;

        else if (arr[i] == 2)
            two++;
    }
 

    return 0;
}