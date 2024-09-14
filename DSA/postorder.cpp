#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node * right;
};
node *root=nullptr;
node *nn(int value)
{
    node *nn;
    nn=new node;
    if (nn==nullptr)
    {
        cout<<"Memory not available";
        exit(0);
    }
    nn->info=value;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
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
    struct node *root;
    root=nn(5);
    root->left=nn(2);
    root->right=nn(3);
    root->left->left=nn(4);
    root->left->right=nn(5);
    root->right=nn(6);
    root->right->left=nn(7);
    root->right->right=nn(8);
    postorder(root);
}


