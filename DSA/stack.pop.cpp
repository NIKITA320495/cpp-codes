#include<iostream>
using namespace std;
struct stack
{
    int info;
    stack *next;
};
stack *top=nullptr;
void push(int info)
{
    stack *newnode =new stack;
    newnode->info=info;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    stack * temp;
    temp=top;
    top=top->next;
    free(temp);
}
void display()
{
    stack *temp;
    temp=top;
    while(temp!=nullptr)
    {
        cout<<temp->info;
        cout<<"<";
        temp=temp->next;

    }
    cout<<"End"<<endl;

}
int main()
{
    int x;
    char choice;
    do
    {
        cout<<"Enter an element";
        cin>>x;
        push(x);
        cout<<"Do you want to continue?";
        cin>>choice;

    }while(toupper(choice)=='Y');

    display();
    cout<<"After using pop"<<endl;
    pop();

    display();
}

