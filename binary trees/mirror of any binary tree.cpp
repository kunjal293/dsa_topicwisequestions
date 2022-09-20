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
node*buildtree()
{
    int data;
    cin>>data;
    if(data=-1)
    {
        return NULL;
    }
    node*root=new node(data);
    root->left=buildtree();
    root->right=buildtree();
}
void preorder(node*root)
{
    if(root==NULL)
    {
        return ;
    }
    //recursive case
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
node* mirror_binary_tree(node*root)
{
    if(root==NULL)
    {
        return root;
    }
    //recursive case
    root->left=mirror_binary_tree(root->left);
    root->right=mirror_binary_tree(root->right);
    swap(root->left,root->right);

    return root;

}
int main ()
{
    node*root=buildtree();

        preorder(root);

    root= mirror_binary_tree(root);

   cout<<mirror_binary_tree(root)<<endl;

    return 0;
}
