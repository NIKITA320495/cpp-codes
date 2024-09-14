#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *newnode(int info)
{
    node *nn=new node;
    nn->info=info;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
void preorder(node *root)
{
    if(root!=nullptr)
    {
        cout<<root->info;
        preorder(root->left);
        preorder(root->right);
    }
}
void flatten(node *root)
{
    if(root!=nullptr){
    node *temp=root->right;
    root->right=root->left;
    root->left=nullptr;
    node* rightmost = root;
        while (rightmost->right != nullptr) {
            rightmost = rightmost->right;
        }

        // Attach the original right subtree to the rightmost node
        rightmost->right = temp;
    flatten(root->right);
    flatten(root->left);
    }
}
int main()
{
    node *root;
    root=newnode(1);
    root->right=newnode(3);
    root->left=newnode(2);
    (root->right)->left=newnode(4);
    (root->right)->right=newnode(5);
    (root->right)->right->left=newnode(6);
    preorder(root);
    flatten(root);
    cout<<endl;
    preorder(root);
}
