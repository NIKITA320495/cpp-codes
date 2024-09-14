#include<iostream>
using namespace std;
int main()
{
    char ch1[]="ABCDE";
    char ch2[]="ABC";
    int l1=0,l2=0;
    for(int i=0;ch1[i]!='\0';i++)
    {
        l1++;
    }
    for(int i=0;ch2[i]!='\0';i++)
    {
        l2++;
    }
        int lb,ls;
   int flag=0;
   for(int i=0;i<lb;i++)
   {       if(ch1[i]==ch2[0])
            {   for (int j=0;j<ls;j++)
                    {
                        if(ch2[j]!=ch1[i+j])
                            {
                                flag=1;
                                break;
                            }

                    if(flag==1)
                    {
                        cout<<ch2[j];
                    }
                    }
       }
   }

}
