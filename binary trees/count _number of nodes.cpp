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
node*buildTree()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    //recursive case

     node*root=new node(data);
    root->left = buildTree();
	root->right = buildTree();
     return root;
}
int number_of_nodes(node*root)
{
    if(root==NULL)
    {
        return 1;
    }
    //recursive case
    int x= number_of_nodes(root->left);
    int y=number_of_nodes(root->right);
    int ans= x+y+1;

}
int main ()
{
    node* root=buildTree();
    cout<<"number of nodes present in binary tree"<<number_of_nodes(root)<<endl;

return 0;

}
