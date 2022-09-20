#include<iostream>
using namespace std;
class node
{
public:

	int data ;
	node*next ;

node(int data)
{
	this->data =data;
	this->next=NULL;
}

};


void insertAtHead(int data ,node*&head)
{
	node*n =new node (data);
	n->next =head;
	head=n;
}
void print_LL(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data  <<" ";
		head=head->next;
	}
	cout<<endl;
}
node*  reverse_LL(node*head)
{
	if(head==NULL )
	{
		return NULL;
	}
	if(head->next==NULL)
	{
		return head;
	}
	node* revHead = reverse_LL(head->next);
	
	node* revTail = head->next;
	revTail->next = head;
	head->next = NULL;
	
	return revHead;
}
int main ()
{
node*head=NULL;
insertAtHead(50,head);
insertAtHead(40,head);
insertAtHead(30,head);
insertAtHead(20,head);	

insertAtHead(10,head);
print_LL(head);
head=reverse_LL(head);
print_LL(head);

	return 0;
}
