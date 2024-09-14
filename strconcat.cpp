#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char fname[100];
    char lname[100];
    cout<<"Enter your name";
    gets(fname);
    cout<<"Enter your last name";
    gets(lname);
    char *ptr1=fname;
    char *ptr2=lname;
    int a;
    a=strlen(fname)+strlen(lname);
    char *ptr3;
    ptr3=(char *)calloc(a,sizeof(char));
    int i,j,k;
    for( i=0;i<strlen(fname);i++)
    {
      ptr3[i]=ptr1[i];
    }

     for(j=strlen(fname),k=0;j<a;j++,k++)
    {
      ptr3[j]=ptr2[k];
    }
    cout<<ptr3;


}
