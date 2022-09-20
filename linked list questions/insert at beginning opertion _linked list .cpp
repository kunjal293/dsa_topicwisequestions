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
void print_LL(node*head)
{
    while(head!=NULL)
    {
        cout<<node->data<< " ";
        head= head->next;
    }
}
int main ()
{

    return 0;
}
