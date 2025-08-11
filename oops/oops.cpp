#include <iostream>
#include <string>
using namespace std;

class info
{
    public:
    string name;
    string department;
    int roll_no;
};

int main()
{
    info student1;
    student1.name = "kumail";
    cout << student1.name << endl;
    return 0;
}