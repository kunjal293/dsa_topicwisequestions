#include<iostream>
using namespace std;
class node
{
	public :

	int data ;
	node*next;
  node(int data )
  {
  	this->data =data ;
  	this->next =NULL;

  }

};
void insertAtHead(int data ,node*&head)
{
	node*n = new node(data);
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
node* swapNodesInPairs(node*&head)
{
    if(head == NULL || head->next == NULL)
     { 
       return head;
    }
    node* first = head , *second = head->next;
    first->next = swapNodesInPairs(head->next->next);
    second->next = first;
    return second;
}       
int main ()
{
	node*head=NULL;
insertAtHead(1,head);
insertAtHead(2,head);
insertAtHead(3,head);
insertAtHead(4,head);
insertAtHead(5,head);
print_LL(head);

swapNodesInPairs(head);
print_LL(head);
	return 0;
}