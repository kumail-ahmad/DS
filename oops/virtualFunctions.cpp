#include <iostream>
using namespace std;

class Parent
{
public:
    void display()
    {

        cout << "Parent class\n";
    }
    virtual void hola()
    {
        cout << "hola from parent\n";
    }
};

class child : public Parent
{
public:
    void display()
    {
        cout << "child class\n";
    }
    void hola()
    {
        cout << "hola from child\n";
    }
};

int main()
{
    child c1;
    c1.hola();
    return 0;
} 