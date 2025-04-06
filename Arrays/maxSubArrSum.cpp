#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    for (int strt = 0; strt < size; strt++)
    {
        for (int end = strt; end < size; end++)

        {
            for (int i = 0; i <= end; i++)
            {

                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}