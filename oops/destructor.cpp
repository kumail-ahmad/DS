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
    // destructor
    ~student() {
        cout << "hi i am destructor";
        delete cgpaPtr;
    };
    void getInfo()
    {
        cout << "name is :" << name << endl;
        cout << "cgpa is: " << *cgpaPtr << endl;
    }
};

int main()
{
    student s1("Kumail", 9.1);

    s1.getInfo();

    return 0;
}