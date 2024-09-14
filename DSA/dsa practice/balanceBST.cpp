#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct TreeNode
{
    int info;
    TreeNode *left;
    TreeNode *right;
};
TreeNode *newTreeNode(int info)
{
    TreeNode *newTreeNode= new TreeNode;
    newTreeNode->info=info;
    newTreeNode->left=nullptr;
    newTreeNode->right=nullptr;
    return newTreeNode;
}
TreeNode *insertTreeNode(TreeNode *root,int info)
{
    if (root==nullptr)
        return newTreeNode(info);
    if(root->info>info)
    {
        root->left=insertTreeNode(root->left,info);
    }
    else
    {
        root->right=insertTreeNode(root->right,info);
    }
    return root;
}
int height(TreeNode *root)
{
    if(root==nullptr)
        return -1;
    else
        return (1 + std::max(height(root->left),height(root->right)));
}
void inorder(TreeNode*root)
{
    if(root!=nullptr)
    {
        inorder(root->left);
        cout<<root->info;
        inorder(root->right);
    }
}
bool isavl(TreeNode*root)
{
    if(root==nullptr)
        return true;
    if(isavl(root->left)==false)
        return false;
    if (isavl(root->right)==false)
        return false;
    if(abs(height(root->left)-height(root->right))<=1)
    return true;
}
TreeNode *leftRotate(TreeNode *x)
{
    TreeNode *y=x->right;
    x->right=y->left;
    y->left=x;
    return y;
}
TreeNode *rightRotate(TreeNode *x)
{
    TreeNode *y=x->left;
    x->left=y->right;
    y->right=x;
    return y;
}
TreeNode *balancedbst(TreeNode *root)
{
    if(root==nullptr)
    return nullptr;
    TreeNode *newroot=newTreeNode(root->info);
    newroot->left=balancedbst(root->left);
    newroot->right=balancedbst(root->right);
    int bf=height(newroot->left)-height(newroot->right);

    if (bf <= 1 && bf >= -1)
        return newroot;

    if(bf>1)
        {
            if(height(newroot->left->left)>=height(newroot->left->right))
            {
                return rightRotate(newroot);
            }
            if (height(newroot->left->left) < height(newroot->left->right))
            {
                newroot->left = leftRotate(newroot->left);
                return rightRotate(newroot);
            }
        }
        if(bf<-1)
        {
            if(height(newroot->right->right)>=height(newroot->right->left))
            {
                return leftRotate(newroot);
            }
            if (height(newroot->right->right) < height(newroot->right->left))
            {
                newroot->right = rightRotate(newroot->left);
                return leftRotate(newroot);
            }
        }
    return newroot;

}
int main()
{
    TreeNode *root=newTreeNode(5);
    root=insertTreeNode(root,3);
    root=insertTreeNode(root,6);
    root=insertTreeNode(root,7);
    root=insertTreeNode(root,9);
    inorder(root);
    bool a=isavl(root);
    cout<<a;
    TreeNode *newroot=balancedbst(root);
    bool b=isavl(newroot);
    cout<<b;
}
