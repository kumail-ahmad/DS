#include <iostream>
using namespace std;
int main()
{
    int arr[] = {
        12, 24, 51, 102, 345};
    int size = 5;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)

    {
        // if (arr[i] > largest)
        // {
        //     largest = arr[i];
        // }
        largest = max(arr[i], largest);
    };
    cout << largest << endl;
}
