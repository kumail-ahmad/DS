#include <iostream>
#include <string>
using namespace std;

class info
{
    // PROPERTIES , ATTRIBUTES
public:
    string name;
    string department;
    int roll_no;
    // MEMBER FUNCTIONS
    void chnageDepart(string newDepart)
    {
        department = newDepart;
    }
    // setter
    void setRollno(int rollno)
    {
        roll_no = rollno;
    }
    // getter
    int getRollno()
    {
        return roll_no;
    }
};

int main()
{
    info student1;
    student1.name = "kumail";

    student1.setRollno(84);

    cout << student1.name << endl;
    cout << student1.getRollno() << endl;
    return 0;
}