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
    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL || tail == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = newNode;
        }
    };
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
 
    circular1.insertAtHead(2);
    circular1.insertAtHead(5);
    circular1.insertAtHead(10);
    circular1.printLinkedList();
    return 0;
}