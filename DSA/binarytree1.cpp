#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *root=nullptr;
void nn(int value)
{
    node *nn;
    nn=new node;
    if(nn==nullptr)
    {
        cout<<"Memory not available";
        exit(0);
    }
    nn->info=value;
    nn->right=nullptr;
    nn->left=nullptr;
    cout<<nn->info;
}
int main()
{
    nn(5);
}
