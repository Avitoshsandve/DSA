#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void insertbeg(node **head, int val)
{
    // create a new node
    node *newNode = new node;
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
}

void printList(node *head)
{
    node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = nullptr;
    insertbeg(&head, 10);
    insertbeg(&head, 20);
    insertbeg(&head, 30);
    printList(head);
    return 0;
}
