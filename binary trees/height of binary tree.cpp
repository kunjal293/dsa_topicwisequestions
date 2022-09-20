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
void height_tree(node*root)
{
    if(root==NULL)
    {
        return;
    }
    int x= height_tree(root->left);
    int y=height_tree(root->right);
   return  max(x,y);
}
int main ()
{


    return 0;
}
