#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    cout << "The size of array is :" << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
        
    };
    return 0;
}