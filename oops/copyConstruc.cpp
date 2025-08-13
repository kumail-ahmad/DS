#include <iostream>
#include <string>
using namespace std;

class info
{

public:
    info(string name, string department, int roll_no)
    {
        this->name = name;
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
    info student2(student1);
    student1.getInfo();
    cout << "----------------" << endl;
    student2.getInfo();
    return 0;
}