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
        cout<<"memory not available";
        exit(0);
    }
    nn->info=info;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
 void build123()
 {
     node *root=nullptr;
     root=newnode(2);
     root->left=newnode(1);
     root->right=newnode(3);
     cout<<root->info<<(root->left)->info<<(root->right)->info;
 }
 int main()
 {
     build123();
 }
