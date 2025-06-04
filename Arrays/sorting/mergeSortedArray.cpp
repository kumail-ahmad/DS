#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> A = {1, 2, 3, 0, 0, 0};
    vector<int> B = {2, 5, 6};
    int m = A.size() - 1;
    int n = B.size() - 1;
    int i = m - 1,
        j = n - 1, index = 5; // i and j are the last indices of A and B respectively, index is the last index of A
    while (i >= 0 && j >= 0)
    {
        if (A[i] > B[j])
        {
            A[index] = A[i];
            i--;
        }
        else
        {
            A[index] = B[j];
            j--;
            index--;
        }
    }
    while (j >= 0)
    {
        A[index] = B[j];
        j--;
        index--;
    }
    return 0;
}