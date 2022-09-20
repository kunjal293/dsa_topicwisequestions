#include <bits/stdc++.h>
using namespace std;
struct treeNode
{
    int value;
    treeNode *left , *right;
    treeNode(int x)
    {
        value = x;
        left = NULL;
        right = NULL;
    }
};
int height(treeNode* root)
{
    if(root == NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    if(l == -1 || r == -1 || abs(l - r) > 1)
        return -1;
    return max(l , r) + 1;
}
bool balanced(treeNode* root)
{
    if(root == NULL)
        return true;
    return (height(root) != -1);
}
int main()
{
    treeNode* root = new treeNode(2);
    root->left = new treeNode(2);
    root->left->left = new treeNode(4);
    if(balanced(root))
        cout << "Balanced" << '\n';
    else
        cout << "Not Balanced" << '\n';
    return 0;
}
