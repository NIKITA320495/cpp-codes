 #include<iostream>
using namespace std;
void swap(int *xptr,int *yptr)
{
    int *temp;
    *temp = *xptr;
    *xptr=*yptr;
    *yptr=*xptr;
}
int main()
{
    int x,y;
    x = 20;
    y = 50;
    cout<<"Values before swaping\n";
    cout<<"x="<<x<<"\ny="<<y;
    swap(x,y);
    cout<<"\nValues after swaping";
    cout<<"\nx = "<<x<<"\ny="<<y;

    }
