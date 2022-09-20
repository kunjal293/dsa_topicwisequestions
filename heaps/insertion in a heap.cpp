#include<iostream>
using namespace std;
class node
{
public:

    node*root;
    node*left;
    node*right;
    node(int data)
    {
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};
int main ()
{

    return 0;
}
