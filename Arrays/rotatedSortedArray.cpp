#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    cout << "The size of array is :" << arr.size() << endl;
    cout << "The printed array is :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
        ;
    };
    return 0;
}