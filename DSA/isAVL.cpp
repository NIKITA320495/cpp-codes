#include<iostream>
using namespace std;
struct node
{
    node *left;
    node *right;
    int info;
};
node *newnode(int info)
{
    node *nn=new node;
    nn->info=info;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
int height(node *root)
{   int lheight;
    int rheight;
    if(root==nullptr)
    {
        return 0;
    }
    else{
    lheight=height(root->left);
    rheight=height(root->right);
    if(lheight>rheight)
        return lheight+1;
    else
        return rheight +1;
}
}
bool isavl(node *root)
{
      if(root==nullptr)
    {
        return true;
    }
    if(isavl(root->left)==false)
        return false;
    if(isavl(root->right)==false)
        return false;
    if(abs(height(root->left)-height(root->right))<=1)
        return true;
}
int main()
{
    node *root;
    root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->right->left=newnode(9);
    root->right->right=newnode(3);
    root->left->left->left=newnode(4);
    root->left->left->left->left=newnode(0);
    bool val=isavl(root);
    cout<<val;
}
