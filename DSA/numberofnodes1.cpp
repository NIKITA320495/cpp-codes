#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *newnode(int value)
{
    node *nn=new node;
    nn->info=value;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
node *root=nullptr;
node *build123()
{

    root=newnode(2);
    root->right=newnode(3);
    root->left=newnode(1);
    return root;
    //cout<<(root->left)->info<<root->info<<(root->right)->info;
}
int countnode(node *root)
{
    if (root==nullptr)
    {
        return 0;
    }
    else
        return(countnode(root->left)+1+countnode(root->right));
}
int main()
{
    root=build123();
    int count=countnode(root);
    cout<<count;

}
