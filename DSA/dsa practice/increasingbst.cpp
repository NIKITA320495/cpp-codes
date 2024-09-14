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
node* increasingBST(node* root) {
    if(root->left!=nullptr){
    increasingBST(root->left);
    root->left=nullptr;
    }
    return nullptr;
}
void inorder(node *root)
{
    if(root!=nullptr)
    {
        inorder(root->left);
        cout<<root->info;
        inorder(root->right);
    }
}
int main()
{
    node*root=newnode(5);
    root->left=newnode(3);
    root->right=newnode(6);
    root->left->left=newnode(2);
    root->left->right=newnode(4);
    root->right->right=newnode(8);
    root->right->right->left=newnode(7);
    root->right->right->right=newnode(9);
    node *root1=increasingBST(root);
   inorder(root1);
}
