#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node * newnode(int info)
{
    node *nn=new node();
    nn->info=info;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
int sumreplacement(node *root)
{
    if (root==nullptr)
    return 0;
    else{
    root->info=root->info+sumreplacement(root->left)+sumreplacement(root->right);
    }
    return root->info;

}
void inorder(node *root)
{
    if(root!=nullptr){
    inorder(root->left);
    cout<<root->info;
    inorder(root->right);
}
}
int main()
{
    node *root=newnode(4);
    root->left=newnode(3);
    root->right=newnode(1);
    root->left->right=newnode(2);
    root->left->left=newnode(4);
    inorder(root);
    int sum=sumreplacement(root);
    cout<<"\n";
    cout<<sum;
    cout<<"\n";
    inorder(root);
}
