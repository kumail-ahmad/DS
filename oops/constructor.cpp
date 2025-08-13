#include <iostream>
#include <string>
using namespace std;

class info
{

public:
    //  parametirised constructor
    info(string name, string department, int roll_no)
    {
        this->name = name; //  this->name is property of object
        this->department = department;
        this->roll_no = roll_no;
    }

    string name;
    string department;
    int roll_no;

    void getInfo()
    {
        cout << "Name :" << name << endl;
        cout << "department :" << department << endl;
        cout << "Roll no :" << roll_no << endl;
    }
};

int main()
{
    info student1 = {"john doe", "CSE", 24115};

    student1.getInfo();

    return 0;
}