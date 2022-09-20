#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;

};
///creating a linked list with 3 items
int main ()
{
    node*head=NULL;
    node*second=NULL;
    node*third=NULL;
       // allocate 3 nodes in the heap
    head = new node();
    second = new node();
    third = new node();

    head->data=1;
    head->next=second;
    second->data=2;
    head->next->next=third;
    third->data=4;
    third->next=NULL;

    // here llinked list consisting if 3 items is inserted

    return 0;
}
