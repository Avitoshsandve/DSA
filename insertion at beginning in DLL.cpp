#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void insertbeg(struct node **head,int data)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node=>data=data;
    new_node=>next=*head;
    new_node=>prev=NULL;

    if(*head!=NULL)
    {
    (*head)->data=data;
    *head=new_node;
    }

};

void displaylist(struct node*node)
{
    struct node *end;
    cout<<"Dpubly linked list: "<<node->data<<end<<endl;
    while(node!=NULL)
    {
        cout<<node->data<<end<<endl;
        node=node->next;
    }
};
A
int main()
{
    struct node *head=NULL;
    insertbeg(&head,1);
    insertbeg(&head,2);
    insertbeg(&head,3);
    insertbeg(&head,4);
    insertbeg(&head,5);
    insertbeg(&head,6);
    insertbeg(&head,7);
    insertbeg(&head,8);
    insertbeg(&head,9);
    insertbeg(&head,10);
    cout<<"Before insetions" << endl;
    displaylist(head);
    cout<<"After insertions"<<endl;
    displaylist(3,69,&head);
    return 0;
}