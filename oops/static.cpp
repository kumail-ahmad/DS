#include <iostream>
using namespace std;

void func()
{
    static int x = 0; // make the variable x lifetime avaliable throughout the program ;
    cout << x << endl;
    x++;
}

int main()
{
    func();
    func();
    func();
    return 0;
}