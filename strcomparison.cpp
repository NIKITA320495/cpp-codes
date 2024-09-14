#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    char *ptr1;
    char *ptr2;
    ptr1=str1;
    ptr2=str2;
    cout<<"Enter string 1";
    gets(str1);
    cout<<"Enter string 2";
    gets(str2);
    int l1,l2,min;
    l1=strlen(str1);
    l2=strlen(str2);
    int flag=0;
    if(l1!=l2)
    {
        cout<<"Strings are unequal";
    }
    else
    {
        for(int i=0;i<l1;i++)
        {
            if(ptr1[i]==ptr2[i])
            {
                flag=1;
            }
        }
    }


    if(flag==1)
    {
        cout<<"Both the strings are equal";

    }
    else
    {
        cout<<"Both the strings are unequal";
    }
}
