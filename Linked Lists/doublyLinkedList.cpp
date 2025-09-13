#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class DoublyList
{
public:
    Node *head;
    Node *tail;

    DoublyList()
    {
        head = tail = NULL;
    }

    void pushFront(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {

            newNode->next = head;
            newNode->prev = NULL;
            head->prev = newNode;
            head = newNode;
        }
    };

   
    void printLinkedList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        };
        cout << "NULL" << endl;
    };
};

int main()
{
    DoublyList LinkedDb1;
    LinkedDb1.pushFront(4);
    LinkedDb1.pushFront(3);
    LinkedDb1.pushFront(2);
    LinkedDb1.pushFront(1);


    LinkedDb1.printLinkedList();
    return 0;
}