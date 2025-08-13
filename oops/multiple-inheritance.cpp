#include <iostream>
using namespace std;

class teacher
{
public:
    string department;
    int block;
    int salary;
};

class students
{
public:
    string name;
    int rollNo;
};

class TA : public students, public teacher
{
public:
    void setInfo(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }
    void getInfo()
    {
        cout << " Name : " << name << endl;
        cout << " salary : " << salary << endl;
        cout << " Department : " << department << endl;
    }
};

int main()
{
    TA Saul;
    Saul.setInfo("Saul", 26000, "Physics");
    Saul.getInfo();
    return 0;
}