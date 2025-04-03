#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Enter the no of columns \n";
    cin >> rows;

    cout << "Enter the no of rows \n";
    cin >> columns;
    for (int j = 1; j <= columns; j++)
    {
        cout << "\n";
        for (int i = 1; i <= rows; i++)
        {
            cout << i << " ";
        }
    }
}