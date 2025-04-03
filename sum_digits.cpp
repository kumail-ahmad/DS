#include <iostream>
using namespace std;

int sumdigits(int num)
{
    int digitSum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        digitSum = digitSum + lastDigit;
        num = num / 10;
    }
    return digitSum;
}

int main()
{
    cout<<sumdigits(7485);
    return 0;
}