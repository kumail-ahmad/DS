#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);//dynamic
       // Node newNode(val); // static
       if (head==NULL)
       {
        head=tail=newNode;
        return;
       }
       
    }
};
int main()
{
List ll;
    return 0;
}