#include<iostream>
using namespace std;
struct node
{
    int info;
    node*left;
    node*right;
};
node*newnode(int info)
{
    node*nn=new node;
    nn->info=info;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
node*searchtree(node*root,int val)
{
    if(root==nullptr)
    {
        return nullptr;
    }
    else if(root->info==val)
    {
        return root;
    }
    node *leftsearch= searchtree(root->left,val);
    node *rightsearch=searchtree(root->right,val);
    if(leftsearch!=nullptr)
        return leftsearch;
    if(rightsearch!=nullptr)
        return rightsearch;
}
void preorder(node *root)
{
    if(root!=nullptr)
    {
        preorder(root->left);
        cout<<root->info;
        preorder(root->right);
    }
}
int main()
{
    node*root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->right->left=newnode(8);
    root->right->right=newnode(7);
    node *root1=searchtree(root,2);
    preorder(root1);
}
