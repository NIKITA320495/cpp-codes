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
void printarray(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i];
    }
}
void printpathrec(node *p,int path[],int plen)
{
    if(p==nullptr)
        return;

    path[plen]=p->info;
    plen++;
    if(p->left==nullptr&&p->right==nullptr)
        printarray(path,plen);
    else
    {
        printpathrec(p->left,path,plen);
        printpathrec(p->right,path,plen);
    }
}
void printpath(node *p)
{
    int path[100];
    printpathrec(p,path,0);
}
int main()
{
    node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    printpath(root);
}
