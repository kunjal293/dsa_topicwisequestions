#include<iostream>
using namespace std;
class node
{
    int data;
    node*next;
    node(int data)
    {
        this->data=data;
        this->next=NULL
    }

};

void insert_at_front(int data, node*head)
{
    node*n =new node(data)
    n->next=head;
    head=n;
}
void print_linked_list(node*head)
{
    while(head!=NULL)
    {
        cout<<head->value<<" ";
    }
    cout<<endl;
}
void delete_at_front(node*&head)
{
    if(head==NULL)
    {
        return ;
    }
    node*temp=head;
    head=head->next;
    delete temp;
}
int main ()
{
    insert_at_front

    return 0;
}
