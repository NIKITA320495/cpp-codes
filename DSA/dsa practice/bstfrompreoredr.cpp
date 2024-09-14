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
node* bstFromPreorder(vector<int>preorder) {
        int n=preorder.size();
        int index=0;
        if(index==preorder.size())
            return nullptr;
        node *root=newnode(preorder[0]);
        index++;
        preorder.erase(preorder.begin());
        if(preorder[1]<preorder[0])
            root->left=bstFromPreorder(preorder);
        else
            root->right=bstFromPreorder(preorder);
        return root;
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
    vector<int>p={8,5,1,7,10,12};
    node *root=bstFromPreorder(p);
    inorder(root);
}
