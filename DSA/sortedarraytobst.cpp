#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *newnode (int info)
{
    node *nn=new node;
    nn->info=info;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
void inorder(node *root)
{
    if(root!=nullptr)
    {   inorder(root->left);
        cout<<root->info<<endl;
        inorder(root->right);
    }
}
node* arraytobst(int arr[],int start,int end)
{
    if(start>end)
    {
        return nullptr;
    }
    int mid=(start+end)/2;
    node *root=newnode(arr[mid]);
    root->left=arraytobst(arr,start,mid-1);
    root->right=arraytobst(arr,mid+1,end);
    return root;
}
int main()
{
    node *root1=nullptr;
    int a[5]={10,20,30,40,50};
    root1=arraytobst(a,0,4);
    inorder(root1);
}
