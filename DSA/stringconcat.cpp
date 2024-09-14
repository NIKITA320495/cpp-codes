#include<iostream>
using namespace std;
int main()
{
    char ch1[100],ch2[100],ch3[100];
    cout<<"Enter first string";
    cin>>ch1;
    cout<<"enter second string";
    cin>>ch2;
    int l1=0,l2=0,l3=0;
    for(int i=0;ch1[i]!='\0';i++)
    {
        l1++;
    }
    for(int i=0;ch2[i]!='\0';i++)
    {
        l2++;
    }
    l3=l1+l2;
    for(int i=0,j=0;i<=l3;j++)
    {
            ch3[i]=ch1[j];
            ch3[i+1]=ch2[j];
            i=i+2;
    }
    for(int i=0;ch3[i]!='\0';i++)
    {
    cout<<ch3[i];
    }
}
