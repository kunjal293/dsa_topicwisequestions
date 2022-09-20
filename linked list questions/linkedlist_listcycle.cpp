#include<iostream>
using namespace std;
class node 
{ public:
	int data ;
	node*next ;

	node(int data )
	{
		this->data=data;
		this->next =NULL;
	}

};
void insert_at_head(int data ,node*head)
{
	node*n =new node (data);
	n->data = head;
	head=n ;
}
void print_LL(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
bool is_cycle(node*head)
{
	if(head==NULL||head->next==NULL)
	{
		return false ;
	}
	else
	{
		node*slow=head;
		node*fast=head->next;
		if(fast==NULL||fast->next=NULL)
		{
		     return false;

		}
		else
		{
			slow=slow->next;
			fast=fast->next;
		}
	}
	return true ;
}
int main ()
{
insert_at_head(50,head);
insert_at_head(40,head);
insert_at_head(30,head);
insert_at_head(20,head);
insert_at_head(10,head);
print_LL(head);
if(is_cycle)
{
	cout<<"true" ;
}
else
{
	cout<<"false" ;
}

	return 0;
}