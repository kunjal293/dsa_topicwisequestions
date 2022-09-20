///traversal is printing the elements  in linked list
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
void printLL(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;


    }
}

int main ()
{
    node*head=NULL;
printLL(head);
    return 0;
}
