#include<iostream>
using namespace std;
int  main()
{
long int j,m[6],*k[6];
char *ch,*A[3];
A[0]="c++is good";
A[1]="progamming language";
cout<<"\n"<<A[0]<<"\t"<<A[1]<<"\n"<<endl;

/*for(int i=0;i<5;i++)
m[i]=3*i;
k[0]=&m[1];
k[3]=&m[4];
j=k[3]-k[0];
cout<<k[3]<<endl;
cout<<k[0]<<endl;
cout<<j<<"\t"<<*(k[0]+2)<<endl;*/
int r[5]={1,2,3,4,5};
cout<<*(&r[0]+2);

}
