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
    if(nn==nullptr)
    {
        cout<<"Memory not available";
    }
    nn->info=info;
    nn->right=nullptr;
    nn->left=nullptr;
    return nn;
}
int countnode(node *root)
{
    if(root==nullptr)
        return 0;
    else
    {
        return(countnode(root->left)+countnode(root->right)+1);
    }
}
int countleaf(node *p)
{
    if(p==nullptr)
        return 0;
    if(p->left==nullptr && p->right==nullptr)
        return 1;
    else
    {
        return(countleaf(p->left)+countleaf(p->right));
    }
}
int countnonleaf(node *p)
{
    if(p==nullptr)
        return 0;
    if(p->left==nullptr && p->right==nullptr)
        return 0;
    else
    {
        return(countnonleaf(p->left)+countnonleaf(p->right)+1);
    }
}
int height(node *p)
{
    int lheight,rheight;
    if(p==nullptr)
    {
        return 0;
    }
    else{
        lheight=height(p->left);
        rheight=height(p->right);
        if(lheight>rheight)
        {
            return (lheight +1);
        }
        else
        {
            return (rheight+1);
        }
    }
}
bool same(node *a,node *b)
{
    if((a==nullptr)&&(b==nullptr))
        return true;
    else if((a!=nullptr)&&(b!=nullptr))
        return ((a->info==b->info)&&same(a->left,b->left)&&same(a->right,b->right));
    else
        return false;
}
void mirror(node *p)
{
    if(p==nullptr)
        return;
    else{
        node *temp;
        mirror(p->left);
        mirror(p->right);
        temp=p->left;
        p->left=p->right;
        p->right=temp;
    }
}
int ispathsum(node *p,int sum)
{
    if(p==nullptr)
        return (sum==0);
    else{
        int subsum=sum-(p->info);
        return(ispathsum(p->left,subsum),ispathsum(p->right,subsum));
    }
}
void preorder(node *p)
{
    if(p!=nullptr)
    {
        cout<<p->info;
        preorder(p->left);
        preorder(p->right);
    }
}
void inorder(node *p)
{
    if(p!=nullptr)
    {
        inorder(p->left);
        cout<<p->info;
        inorder(p->right);
    }
}
void postorder(node *p)
{
    if(p!=nullptr)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->info;
    }
}
int main()
{
    node *root=newnode(1);
    root->left=newnode(2);
    root->left->left=newnode(4);
    root->right=newnode(3);
    cout<<root->left->info<<root->info<<root->right->info;
    cout<<endl;
    mirror(root);
    cout<<"mirror of tree";
    cout<<root->left->info<<root->info<<root->right->info;
    int n=countnode(root);
    cout<<endl;
    cout<<"number of nodes"<<n;
    int l=countleaf(root);
    cout<<endl;
    cout<<"number of leaf nodes"<<l;
    int nl=countnonleaf(root);
    cout<<endl;
    cout<<"number of non leaf nodes"<<nl;
    int h=height(root);
    cout<<endl;
    cout<<"height of tree"<<h;
    node *root1=newnode(1);
    root1->left=newnode(2);
    root1->right=newnode(3);
    cout<<endl;
    bool issame=same(root,root1);
    cout<<"is root and root1 same"<<issame;
    int s=ispathsum(root,7);
    cout<<endl;
    cout<<"ispathsum"<<s;
    cout<<endl;
    cout<<"preorder traversal";
    preorder(root);
    cout<<endl;
    cout<<"inorder traversal";
    inorder(root);
    cout<<endl;
    cout<<"postorder traversal";
    postorder(root);
}
