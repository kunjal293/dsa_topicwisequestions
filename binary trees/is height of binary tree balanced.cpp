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
    node*root=new node(data);
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
    //recursive case
    int x= height_of_binary_tree(root->left);
    int y = height_of_binary_tree(root->right);
    return 1+max(x,y);
}
bool check_height_balanced(node*root)
{
    bool x=check_height_balanced(root->left);
    bool y=check_height_balanced(root->right);
    bool z =abs(height_of_binary_tree(root->left)-height_of_binary_tree(root->right)<=1?true:false);
    return x&&y&&z;
}
int main ()
{
    node* root = buildTree();

	 check_height_balanced(root) ? cout << "height-balanced!" << endl :
	                            cout << "not height-balanced" << endl;
    return 0;
}
