#include<iostream>
#include<vector>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
};
node *nn(int val)
{
    node *nn=new node;
    nn->val=val;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
vector<int> inorder(node *p)
{
    vector<int>in;
    if(p!=nullptr)
    {
        inorder(p->left);
        in.push_back(p->val);
        inorder(p->right);
    }
    return in;
}
int minval(node *p)
{
    vector<int> in = inorder(p);
    if (in.empty()) {
        // Handle case when tree is empty
        return -1; // Or any other appropriate value
    }
    return in[0];
}

int main()
{
    struct node *root;
    root=nn(5);
    root->left=nn(3);
    root->right=nn(7);
    root->left->left=nn(2);
    int m=minval(root);
    cout<<m;
}
