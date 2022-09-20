#include<iostream>
using namespace std;
class node
{
	public :
	int data ;
	node*next;
    node(int data )
    {
    	this->data= data ;
    	this->next =NULL;
    }
};
void insert_at_head(int data ,node*&head)
{
	node*n =new node(data );
	n ->next =head;
	head=n;
}
void print_LL(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head= head->next ;
	}
	cout<<endl;

}
bool search_LL(int target ,node* head)
{
	while(head!=NULL)
	{
		if(head->data ==target)
		{
			return true ;
		}
		head=head->next;
	}
	return false;

}
bool  search_recursive(int target ,node*head)
{
	if(head==NULL)
	{
		return false;
	}
	//recursive case
	if(head->data ==target)
	{
		return true ;
	}
	return search_recursive(target ,head->next) ;
}
int main ()
{
	node* head = NULL; 
insert_at_head(50, head);
	insert_at_head(40, head);
	insert_at_head(30, head);
	insert_at_head(20, head);
	insert_at_head(10, head); 

	print_LL(head);

    int target ;
    cin>>target ;
     search_LL(target, head) ? cout << "true" << endl :
	                       cout << "false" << endl;

	search_recursive(target, head) ? cout << "true" << endl :
	                                cout << "false" << endl;             



	return 0;
}