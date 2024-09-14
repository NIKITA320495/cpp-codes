#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
};
node *newnode(int value)
{
    node *nn=new node;
    nn->val=value;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
vector<vector<int>> levelOrder(node* root) {
     vector<vector<int>>l;
     if(root==nullptr)
        return l;
     queue<node*>q;
     q.push(root);
     while(!q.empty()){
     int levelsize=q.size();
     vector<int>levelvalues;
     for(int i=0;i<levelsize;i++)
     {
            node *curr=q.front();
            q.pop();
            levelvalues.push_back(curr->val);

            if (curr->left) {
                q.push(curr->left);
            }

            if (curr->right) {
                q.push(curr->right);
            }
        }

        l.push_back(levelvalues);
        }
        return l;
}
int main()
{
    node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    vector<vector<int>>lo=levelOrder(root);
   for(int i=0;i<lo.size();i++)
   {
       for(int j=0;j<lo[i].size();j++)
       {
       cout<<lo[i][j];
       }
   }
}
