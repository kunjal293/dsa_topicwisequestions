#include<iostream>
using namespace std;
class node
{
public:

    int data;
    node*right;
    node*left;

    node(int data)
    {

    this->data=data;
    this->left=NULL;
    this->right=NULL;
    }
};
void print_in_order(node*root)
{
    if(root==NULL)
    {
        return ;
    }
   print_in_order(root->left);
    cout<<root->data<<" ";
    print_in_order(root->right);
}
node* insert(node*root,int data)
{
    if(root==NULL)
    {
       root = new node(data);
		return root;
    }
    if(data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);

    }
    return root;
}
int main ()
{	node* root = NULL;

	root = insert(root, 10);

	root = insert(root, 5);
	root = insert(root, 3);
	root = insert(root, 7);

	root = insert(root, 15);
	root = insert(root, 13);
	root = insert(root, 17);



	cout << endl;

	print_in_order(root);

	cout << endl;

	return 0;

}
