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
   node* root = new node(data);
    root->left = buildTree();
    root->right=buildTree();
    return root;
}
void pre_order(node*root)
{
    if(root==NULL)
    {
        return ;
    }
    //recursive case
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}

node*mirror_tree(node*root)
{
    //base case
    if(root==NULL)
    {
        return root;
    }
    //recursive case
    root->left=mirror_tree(root->left);
    root->right=mirror_tree(root->right);
    swap(root->left,root->right);
    return root;

}
int main ()
{
    node*root=buildTree();
   root= mirror_tree(root);
   pre_order(root);
    return 0;
}
