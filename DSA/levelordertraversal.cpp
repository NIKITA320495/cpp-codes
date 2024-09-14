#include<iostream>
#include<queue>
using namespace std;
struct node
{
    node *left;
    node *right;
    int info;
};
node *newnode(int info)
{
    node *nn=new node;
    nn->info=info;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
void printlevelorder(node *root)
{
    if(root==nullptr)
        return;
    queue<node *> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty())
    {
        node *node=q.front();
        q.pop();
        if(node!=nullptr)
        {
            cout<<node->info;
            if(node->left!=nullptr)
            q.push(node->left);
            if(node->right!=nullptr)
                q.push(node->right);
        }
        else if(!q.empty())
            q.push(nullptr);
        }
    }
void sumatk(node *root,int k)
{
    if(root==nullptr)
        return;
    int level=0;
    int sum=0;
    queue<node *> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty())
    {
        node *node=q.front();
        q.pop();
        if(node!=nullptr)
        {
            if(level==k)
            {
                sum+=node->info;
            }
            if(node->left!=nullptr)
            q.push(node->left);
            if(node->right!=nullptr)
                q.push(node->right);
        }
        else if(!q.empty())
            {q.push(nullptr);
            level++;}
    }
    cout<<sum;
}
int main()
{
    node *root;
    root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    printlevelorder(root);
    cout<<endl;
    sumatk(root,1);
}



