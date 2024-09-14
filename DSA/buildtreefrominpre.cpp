#include<iostream>
using namespace std;
struct node
{
    node *left;
    int info;
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
int search(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}
node *buildtree(int preorder[],int inorder[],int start,int end)
{
    int idx=0;
    if(start>end)
    return nullptr;
    int curr=preorder[idx];
    idx++;
    node *tree =newnode(curr);
    if(start==end)
    {
        return tree;
    }
    int pos=search(inorder,start,end,curr);
    tree->left=buildtree(preorder,inorder,start,pos-1);
    tree->right=buildtree(preorder,inorder,pos+1,end);
}
void inorderprint(node *root)
{
    if(root!=nullptr)
    {
        inorderprint(root->left);
        cout<<root->info;
        inorderprint(root->right);
    }
}
int main()
{
    int preorder[5]={1,2,4,3,5};
    int inorder[5]={4,2,1,5,3};
    node *root=buildtree(preorder,inorder,0,4);
    inorderprint(root);
}
