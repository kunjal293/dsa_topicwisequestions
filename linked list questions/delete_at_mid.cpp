#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;

  node(int data )
  {
  	this->data=data;
  	this->next=NULL;
  }

};
void insertAtHead(int data ,node*head)
{
	node*n = new node(head);
	n->next=head;
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
int main ()
{

	return 0;
}