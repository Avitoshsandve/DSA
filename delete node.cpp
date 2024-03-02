#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
		
	node(int val)
	{
		data=val;
		next=NULL;
	}
};

void insertAtHead(node* &head,int val)
{
	node* n=new node(val);
	n->next=head;
	head=n;
}

void insertAtTail(node* &head,int val)
{
	node* n = new node(val);
	if(!head)
	{
		head=n;
		return;
	}
	
	node* temp=head;
	while(temp->next)  temp = temp->next;
	temp->next=n;
}

void display(node* head)
{
	node* temp=head;
	while(temp)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

void deleteAtHead(node* &head,int val)
{
	if(head->data != val) // need to check when there is only one node in the linked list
	{
		cout<<"Key is not present"<<endl;
		return;
	}
	node* temp=head;
	head=head->next;
	delete temp;
}

void deletion(node* &head,int val)
{
	if(!head) return;
	if(!head->next || head->data==val)
	{
		deleteAtHead(head,val);
		return;
	}
	
	node* temp=head;
	while(temp->next && temp->next->data!=val)
	{
		temp=temp->next;
		if(!temp->next)
		{
			cout<<"Key is not present"<<endl;
			return;
		}
	}
	node* todelete = temp->next;
	temp->next=temp->next->next;
	delete todelete;
}

int main()
{
	node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	display(head);
	deletion(head,0);
	display(head);
	deletion(head,1);
	display(head);
	return 0;
}