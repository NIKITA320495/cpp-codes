#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *newnode (int info)
{
    node *nn=new node;
    nn->info=info;
    nn->left=nullptr;
    nn->right=nullptr;
}
node* insert(node* root, int key, char direction) {
    if (root == nullptr) {
        return newnode(key);
    }
    if(direction=='l')
    {
        root->left= insert(root->left,key,direction);
    }
    else if(direction=='r')
    {
        root->right=insert(root->right,key,direction);

    }
    else
    {
        cout<<"invalid";
    }
    return root;
}
node * deletenode(node *p,int key)
{
      if (p == nullptr) {
        return nullptr; // Key not found
    }
    node *temp;
    if(p->info==key)
    {
        if(p->left==nullptr && p->right==nullptr)
        {
            temp=p;
            free(p);
            return (temp);
        }
        else if(p->left==nullptr && p->right!=nullptr)
        {
            temp=p;
            p=p->right;
            free(temp);
            return(p);
        }
        else if(p->left!=nullptr && p->right == nullptr)
        {
            temp=p;
            p=p->left;
            free(temp);;
            return p;
        }
        else
        {
            temp=p->right;
            while (temp->left != nullptr) {
                temp = temp->left;
            }
            p->info = temp->info;
            p->right = deletenode(p->right, temp->info); // Continue with deletion in the right subtree
            return p;
        }
    }
    p->left=deletenode(p->left,key);
    p->right=deletenode(p->right,key);
}
void inorder(node *p)
{
    if(p!=nullptr)
    {
        inorder(p->left);
        cout<< p->info;
        inorder(p->right);
    }
}
int main()
{
 node *root=nullptr;
 int x,val;
 char ch,direction;
cout<<"Enter the value of root";
                    cin>>x;
                    root=newnode(x);
                    do
                    {
                        cout<<"Do you want to enter a value(enter -1 for nullvalue)";
                        cin>>ch;
                        if(ch=='y')
                        {
                            cout<<"Enter value";
                            cin>>val;
                            if(val!=-1)
                            {
                                   cout<<"Enter direction";
                                   cin>>direction;
                                   root=insert(root,val,direction);
                            }
                            else{
                                cout<<"inserting nullptr";
                            }

                        }

                    }while(ch=='y');

                    inorder(root);
                    int key;
                    cout<<"Enter the value to be deleted";
                    cin>>key;
                    deletenode(root,key);
                    inorder(root);
}
