#include<iostream>
using namespace std;
void add();
int add(int a,int b)
{
    int sum;
    sum = a+b;
        return sum;
}
int main()
{
 int x,y;
 cout<<"Enter the value of x and y:";
 cin>>x>>y;
 int result=add(x,y)
cout<<result;


}
