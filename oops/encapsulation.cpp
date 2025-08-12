// data hiding
#include <iostream>
using namespace std;

class account
{
public:
    int accNo;
    string name;

private:
    double balance;
    string password;
};

int main()
{
    account Person1;
    Person1.name = "John doe";
    //   Person1.password = "abc123";
    cout << Person1.name << endl;
    //  cout << Person1.password << endl; // cannot access
    return 0;
}