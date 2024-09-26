#include<bits/stdc++.h>
using namespace std;
class BinaryTreeNode
{
    public:
    int val;
    BinaryTreeNode*left;
    BinaryTreeNode*right;
   BinaryTreeNode(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    // Write your code here
    // base case
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    return (l || r);
}
int main()
{
  


    return 0;
}
