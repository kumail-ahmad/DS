#include <iostream>
#include <string>
using namespace std;

class info
{

public:
    //  parametirised constructor
    info(string n, string dep, int roll)
    {
        name = n;
        department = dep;
        roll_no = roll;
    }

    string name;
    string department;
    int roll_no;
};

int main()
{
    info student1={"john doe","CSE",24115};
    
    cout << student1.name << endl;

    return 0;
}