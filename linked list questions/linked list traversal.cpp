#include<iostream>
using namespace std;
class node
{
    int data;
    node*next;

    node(int data)
{
    this->data=data;
    this->next=NULL;

}
};

void insert_at_head(int data,node* head)
{
    node*n= new node(data);
   n->next = head;
    head=n;
    return head;
}
void print_LL(node*head)
{
    while(head!=NULL)
      {
          node*head= new node();
        cout<<head->data<< " ";
        head=head->next;

    }

}
int main ()
{

    node* head = NULL; // linked list is initially empty

	insert_at_head(50, head);
	insert_at_head(40, head);
	insert_at_head(30, head);
	insert_at_head(20, head);
	insert_at_head(10, head);
	insert_at_head(0, head);



	print_LL(head);
return 0;
}
