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

class CircularList
{
public:
    Node *head;
    Node *tail;

    CircularList()
    {

        head = tail = NULL;
    }
    
    void printLinkedList()
    {
        Node *temp = head;
        if (head == NULL)
        {
            return;
        }
        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "Back to head" << endl;
    }
};

int main()
{
    CircularList circular1;
 
   
    circular1.printLinkedList();
    return 0;
}