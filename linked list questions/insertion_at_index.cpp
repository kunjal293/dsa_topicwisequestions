#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;

   node(int data)
   {
   	 this->data=data;
   	 this->next=NULL;
   }
};
void insertAtHead(int data ,node*&head)
{
	node*n =new node(data);
	n->next=head;
	head=n;
}

void printLinkedList(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
	cout<<endl;
}
node* get_node(int j ,node*temp)
{
	int k =0;
    while(temp != NULL && k < j) { // while(temp && k < j)
		temp = temp->next;
		k++;
	}
	return temp;

}
void insert_at_index(int i,int data,node*&head)
{ 
	if(i==0)
	{
		insertAtHead(data,head);
		return ;
	}
	node* prev = get_node(i-1, head) ;
	if(prev ==NULL)
	{
		return  ;
	}

	node*n =new node(data);
	n->next=prev->next;
	prev->next=n;
}

int main ()
{
	node*head=NULL;
	insertAtHead(50,head);
	insertAtHead(40,head);
	insertAtHead(30,head);
	insertAtHead(20,head);
	insertAtHead(10,head);


	printLinkedList(head);
	insert_at_index(2,25,head);
	printLinkedList(head);


	return 0;
}