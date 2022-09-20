#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;

    node (int data)
    {
        this->data=data;
        this ->next=NULL;
    }
};
void insert_at_front(int data,node*&head)
{
    node*n=new node(data);
    n->next=head;
    head=n;
}
void print_linked_list(node*head)
{
    while(head!=0)
    {
        cout<<head->data<<endl;
        head->next;
    }
    cout<<endl;
}
int main ()
{
    return 0;
}
