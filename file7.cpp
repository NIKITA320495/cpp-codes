#include<iostream>
using namespace std;
void print(int n,int A[5],int*j)
{
A[4]=60;
*j=15;
for(int i=0;i<=4;i++)
  {
  cout<<"\n"<<&A[i]<<"\t"<<A[i]<<"\t"<<*j;
  }
}
void print1(int k,int n)
{
k=80;
n=20;
cout<<"\n"<<k<<"\t"<<n;
}
void main()
{

int A[]={10,20,30,40,50};
int m,*j;
m=5;
j=&m;
print(5,A,j);       //pass by reference
cout<<"\n"<<A[4]<<"\t"<<m;

print1(A[3],m);      //pass by value
cout<<"\n"<<A[3]<<"\t"<<m;

}

