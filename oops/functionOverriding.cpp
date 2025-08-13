#include <iostream>
using namespace std;

class Parent
{
public:
    void display() 
    {

        cout << "Parent class\n";
    }
};

class child : public Parent
{
public:
    void display()
    {
        cout << "child class\n";
    }
};
main()
{
    child c1;
    c1.display();
    return 0;
}