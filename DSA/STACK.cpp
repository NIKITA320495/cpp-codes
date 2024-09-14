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
    stack *newnode= new stack;
    newnode->info=info;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    stack* temp;
    temp=top;
    if (top==nullptr)
    {
        cout<<"Stack Overflow!"<<endl;
    }
    else{
    top=top->next;
    free(temp);
    }
}
void display()
{
    stack * temp;
    temp=top;
    if (top==nullptr)
    {
        cout<<"Stack Empty";
    }
    else{
    while(temp!=nullptr)
    {
        cout<<temp->info<<"<";
        temp=temp->next;
    }
    cout<<"End";
    cout<<"\n";
    cout<<"Top value"<<top->info;
    }
}
int main()
{
    int x,choice;
    char c,ch;
    do
    {
     cout<<"\t\t\t\tSTACK"<<endl;
     cout<<"\t\t\t\t1.PUSH"<<endl;
     cout<<"\t\t\t\t2.POP"<<endl;
     cout<<"\t\t\t\t3.EXIT"<<endl;
     cout<<"Enter your choice";
     cin>>choice;
     switch(choice)
     {
     case 1:
        do
                {
                cout<<"Enter";
                cin>>x;
                push(x);
                cout<<"more";
                cin>>ch;
                }while(toupper(ch)=='Y');
                display();
                break;
     case 2 :
        pop();
        display();
        break;
     case 3:
        exit(0);
        break;
     case 4:
        cout<<"Wrong choice";
     }
    cout<<"Do you want to continue?";
    cin>>c;
}while(toupper(c)=='Y');

}
