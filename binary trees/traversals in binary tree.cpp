#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;

    node(int data)
    {
    this->data=data;
    this->left=NULL;
    this->right=NULL;
    }
};
void print_pre_order(node*root)
{
    ///base case
    if(root==NULL)
    {

        return ;

    }
    ///recursive case
    cout<<root->data<<" ";
    print_pre_order(root->left);
    print_pre_order(root->right);

}
void print_in_order(node*root)
{
    ///base case
    if(root==NULL)
    {

        return ;
    }
    ///recursive case
    print_in_order(root->left);
    cout<<root->data<<" ";
    print_in_order(root->right);
}
void print_post_order(node*root)
{
    //base case
    if(root==NULL)
    {

        return ;
    }
    //recursive case
    print_post_order(root->left);
    print_post_order(root->right);
    cout<<root->data<<" ";

}
int main ()
{
    node*root=NULL;

	root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->right = new node(60);
	root->left->right->left = new node(70);
	cout<<"pre order traversal in binary tree"<<endl;
	print_pre_order(root);
	cout<<endl;
	cout<<"in order traversal in binary tree"<<endl;
	print_in_order(root);
	cout<<endl;
	cout<<"post order traversal in binary tree"<<endl;
	print_post_order(root);
	cout<<endl;
	return 0;
}
