#include<iostream>
#include<vector>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
};
node *newnode(int val)
{
    node *nn=new node;
    nn->val=val;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
node *maketree(vector<int>arr)
{
    if(arr.empty())
        return nullptr;
    int n=arr.size();
    node *root=newnode(arr[0]);
    return root;
    arr.erase(arr.begin());
    if(height(root->left)-height(root->right)==-2)
    {
        root->
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
void inorder(node *root)
{
    if(root!=nullptr)
    {
        inorder(root->left);
        cout<<root->val;
        inorder(root->right);
    }
}
int main()
{
    node *root=maketree({-10,-3,0,5,9});
    inorder(root);
}
