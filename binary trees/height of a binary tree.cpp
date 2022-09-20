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
node*buildTree()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    node*root= new node( data);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
int height_of_binary_tree(node*root)
{
    if(root==NULL)
    {
        return 0 ;
    }
    int x=height_of_binary_tree(root->left);
    int y =height_of_binary_tree(root->right);
    return 1+ max(x,y);
}
int main ()
{
    node*root=buildTree();
    cout<<"height of binary tree"<<height_of_binary_tree(root)<<endl;
    return 0;
}
