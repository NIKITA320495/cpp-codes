#include<iostream>
using namespace std;
int main()
{

int A[]={10,20,30,40,50};
int *j;
j=A;

for(int i=0;i<=4;i++)
  {

  //cout<<"\n"<<&j<<"\t"<<&j[i]<<"\t"<<*j<<"\t"<<A[i];
  cout<<"\n"<<*j;
  j++;
  }

}
