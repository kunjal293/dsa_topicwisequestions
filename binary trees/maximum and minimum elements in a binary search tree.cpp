#include<iostream>
using namespace std;
class node
{
public:

    int data ;
    node*left;
    node*right;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
node* find_minimum(node*root)
{
    if(root==NULL)
    {
        return root;
    }
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}
node* find_maximum(node*root)
{
    if(root==NULL)
    {
        return root;

    }
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}
int main() {
	node* root = new node(10);

	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);
	root->left->left->right = new node(4);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);
	root->right->right->left = new node(16);

	node* minNode = find_minimum(root);
	node* maxNode = find_maximum(root);

	minNode ? cout << "minimum data : " << minNode->data << endl :
	          cout << "tree is empty!" << endl;

	maxNode ? cout << "maximum data : " << maxNode->data << endl :
	          cout << "tree is empty!" << endl;

	return 0;
}
