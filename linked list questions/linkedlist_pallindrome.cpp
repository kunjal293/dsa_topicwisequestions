#include<iostream>
#include<stack>
using namespace std;
class node
{
public:
	int data;
	node*next;
   node(int data )
   {
   	this->data =data ;
   	this->next =NULL;
   }
};
void insertAtHead(int data ,node*&head)
{
	node*n=new node(data);
	n->next=head;
	head=n;
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
bool pallindrome_number(node*head)
{
	   node* slow= head;
  
        stack <int> s;

        while(slow != NULL){
                s.push(slow->data);
  
                slow = slow->next;
        }

        while(head != NULL ){
       
             int i=s.top();
 
             s.pop();

 
            if(head -> data != i){
                return false;
            }
  
           
           head=head->next;
        }
  
return true;
}

int main ()
{
	node*head=NULL;
insertAtHead(50,head);
insertAtHead(40,head);
insertAtHead(30,head);
insertAtHead(20,head);
print_LL(head);
if(pallindrome_number(head))
{
	cout<<"true";
}
else
{
	cout<<"false";
}

	return 0;
}