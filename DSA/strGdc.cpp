#include<iostream>
using namespace std;
int main()
{
    char ch1[]="YABCD";
    char ch2[]="XYZABC";
    char ch3[100];
    int l1=0,l2=0,l;
    int flag=0;
    for(int i=0;ch1[i]!='\0';i++)
    {
        l1++;
    }
    for(int i=0;ch2[i]!='\0';i++)
    {
        l2++;
    }
    if(l1<l2)
    {
        l=l1;
    }
    else
    {
        l=l2;
    }

   for(int i=0;i<l;i++)
   {
       for(int j=i;j<l;j++)
       {
           if(ch1[i]==ch2[j])//j=4 i=2
           {
                for(int k=0;k<l;k++)
                {
                    if (ch1[i+k]==ch2[j+k])
                        {
                            ch3[k]=ch1[i+k];
                        }
                }
           }

        }
    }
    for(int k=0;k<l;k++)
    {
        cout<<ch3[k];
    }
}







