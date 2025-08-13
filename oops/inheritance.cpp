#include <iostream>
using namespace std;
class university
{
public:
    string department;
    int block;

    university(string department, int block)
    {
        this->department = department;
        this->block = block;
        cout << " I am parent constructor" << endl;
    }
    ~university()
    {
        cout << " parent destructor here" << endl;
    }
};

class teachers : public university
{
public:
    int employeeId;
    // Derived constructor
    teachers(string department, int block, int employeeId) : university(department, block) // base constructor
    {
        this->employeeId = employeeId;
        cout << " I am child constructor" << endl;
    }
    ~teachers()
    {
        cout << " child destructor here" << endl;
    }

    void getInfo()
    {
        cout << "department is : " << department << endl;
        cout << "block is : " << block << endl;
        cout << "employeeId is : " << employeeId << endl;
    }
};

int main()
{
    teachers t1("S6", 5, 115);
    t1.getInfo();
    return 0;
}