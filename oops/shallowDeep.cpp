#include <iostream>
using namespace std;

class student
{
public:
    string name;
    double *cgpaPtr;
    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    void getInfo()
    {
        cout << "name is :" << name << endl;
        cout << "cgpa is: " << *cgpaPtr << endl;
    }
};

int main()
{
    student s1("Kumail", 9.1);
    student s2(s1);
    s1.getInfo();

    *(s2.cgpaPtr) = 6.3;
    s1.getInfo(); //This is the error with the shallow copy 

    return 0;
}