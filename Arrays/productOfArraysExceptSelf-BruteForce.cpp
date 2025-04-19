#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // O(n2)--not an optimal approach
    vector<int> nums = {-1, 1, 0, -3, 3};
    vector<int> numsProd;

    int product;
    for (int i = 0; i < nums.size(); i++)
    {
        product = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
            {
                product = product * nums[j];
            }
        }
        numsProd.push_back(product);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << numsProd[i] << " ";
    }

    return 0;
}