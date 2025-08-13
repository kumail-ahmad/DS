#include <iostream>
using namespace std;

class college
{
public:
    string department;
    int block;
};

class students : public college
{
public:
    string name;
    int rollNo;
};

class Gradstudent : public students
{
public:
    string researchTopic;

    void setInfo(string name, string researchTopic, string department)
    {
        this->name = name;
        this->researchTopic = researchTopic;
        this->department = department;
    }
    void getInfo()
    {
        cout << " Name : " << name << endl;
        cout << " Research Topic : " << researchTopic << endl;
        cout << " Department : " << department << endl;
    }
};

int main()
{
    Gradstudent Saul;
    Saul.setInfo("Saul", "Quantum mechanics", "Physics");
    Saul.getInfo();
    return 0;
}