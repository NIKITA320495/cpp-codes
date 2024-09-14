#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
struct TreeNode
{
    int info;
    TreeNode *left;
    TreeNode *right;
};
TreeNode *newTreeNode(int value)
{
    TreeNode *nn=new TreeNode;
    nn->info=value;
    nn->left=nullptr;
    nn->right=nullptr;
    return nn;
}
void printarray(int ints[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        cout<<ints[i];
    }
}

int convertarraytonum(int arr[], int n) {
    int num = 0;
    for (int i = n - 1; i >= 0; i--) {
        num += arr[i] * pow(10, n - 1 - i);
    }
    return num;
}

vector<int> printpathrec(TreeNode *p, int path[], int plen) {
    vector<int> vec;
    if (p == nullptr)
        return vec; // Return an empty vector if p is nullptr
    path[plen] = p->info;
    plen++;
    if ((p->left == nullptr) && (p->right == nullptr)) {
        int s = convertarraytonum(path, plen);
        vec.push_back(s);
        return vec;
    }
    else {
        vector<int> left_path = printpathrec(p->left, path, plen);
        vector<int> right_path = printpathrec(p->right, path, plen);
        vec.insert(vec.end(), left_path.begin(), left_path.end());
        vec.insert(vec.end(), right_path.begin(), right_path.end());
        return vec;
    }
}

int sumNumbers(TreeNode *root) {
    int path[100];
    int sum = 0;
    vector<int> sums = printpathrec(root, path, 0);
    for (int i = 0; i < sums.size(); i++) {
        sum += sums[i];
    }
    return sum;
}
void printpath(TreeNode *p)
{
    int path[100];
    printpathrec(p,path,0);
}

int main()
{
    TreeNode * root=newTreeNode(1);
    root->left=newTreeNode(2);
    root->right=newTreeNode(3);
    root->left->left=newTreeNode(4);
    root->left->right=newTreeNode(5);
    root->right->left=newTreeNode(9);
    root->right->right=newTreeNode(3);
    root->left->left->left=newTreeNode(4);
    root->left->left->left->left=newTreeNode(0);
    int s=sumnumbers(root);
    cout<<s;
}

