#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node * right;
};
node *newnode(int info)
{
    node *nn=new node;
    nn->info=info;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
int sumSubtree(node *root)
{
   if(root==nullptr)
    return 0;
 if(root->left==nullptr && root->right!=nullptr)
    return sumSubtree(root->right);
    int leftSum = sumSubtree(root->left);
    int rightSum = sumSubtree(root->right);
    return leftSum+rightSum+root->info;
}
int countnode(node *root)
{
    if(root==nullptr)
        return 0;
    return countnode(root->left)+countnode(root->right)+1;
}
int avg(node *root)
{
    if(root==nullptr)
        return 0;
    int sum=sumSubtree(root);
    int countn=countnode(root);
    return sum/countn;
}
int isavg(node *root)
{
    int c=0;
    if(avg(root)==root->info)
    {

    }
}



int main()
{

    node *root=newnode(4);
    root->left=newnode(8);
    root->right=newnode(5);
    root->left->left=newnode(0);
    root->left->right=newnode(1);
    int c=sumSubtree(root);
    cout<<c<<endl;
}
