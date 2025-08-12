#include <iostream>
#include <string>
using namespace std;

class info
{

public:
// non parametirised constructor
    info()
    {
        name = "Kumail Ahmad ";
    }

    string name;
};

int main()
{
    info student1;
    //we didnt initialize a value to name, but got initialized through the constructor
    cout << student1.name << endl;

    return 0;
}