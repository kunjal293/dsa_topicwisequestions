//circular linked list we only use the tail pointer


#include<iostream>
using namespace std;
class node
{
public:
    int data ;
    node*next;
    node (int data )
    {
        this->data=data;
        this->next=NULL;
    }
    ~node()
    {
        int value=this->data ;
        if(this->next!=NULL)
        {

            delete next;
            next=NULL;

        }
       cout<<"memory of node is empty"<<value<<endl;
    }
};
void insert_node(node*&tail,int element ,int d)
{
    //empty list
    if(tail=NULL)
    {
        node*new node=new node(d);
        tail=newnode;
        newnode->next =newnode;
    }
    else
    {
        node*curr=tail;
        while(curr->data!=element )
        {
            curr=curr->next;
        }
        //element found
        node*temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(node*tail)
{
    node*temp=tail;
    cout<<tail->data<<" ";
    while(tail->next !=temp)
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }



}
int main ()
{
    node*tail=NULL;
    insertnode(tail,5,3);
    print(tail);
    return 0;
}
