// container with most water , optimal approach
#include <iostream>
using namespace std;
int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);
    int lp = 0, rp = n - 1, maxWater = 0;

    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currentWater = w * ht;

        maxWater = max(currentWater, maxWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    cout << "the maximum water that can be contained is  : " << maxWater << endl;
    return 0;
}