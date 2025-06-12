#include <iostream>
using namespace std;
int main()
{
    int n, first = 0, second = 1, next;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";
        first = second;
        next = first + second;
        second = next;
    }
}