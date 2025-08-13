#include <iostream>
using namespace std;

class Print
{
public:
    void display(int n)
    {
        cout << "integer : " << n << endl;
    };
    void display(char ch)
    {
        cout << "character is : " << ch << endl;
    };
};

int main()
{
    Print s1;
    s1.display('a');
    return 0;
}