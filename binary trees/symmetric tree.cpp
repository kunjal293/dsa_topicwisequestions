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
node* is_mirror(node*root)
{
     if (root1 == NULL && root2 == NULL)
        return true;
         if
         {(root1 && root2 && root1->key == root2->key)
        return isMirror(root1->left, root2->right)
      && isMirror(root1->right, root2->left);
         }
               else
               {
                   return false;
               }

}
bool is_symetric(node*root)
    return is_mirror(root,root);
}
int main ()
{
    node*root=buildtree();

        preorder(root);
        is_symmetric(root,root);
        cout<<is_symmetric(root);
        return 0;
}
