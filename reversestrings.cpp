#include<iostream>
using namespace std;
int main()
{
    char str1[6]="hello";
    char vow[6]="aeiou";
    char str2[6];
    int flag=0;
    int k=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(str1[i]==vow[j])
            {
            str2[k]=str1[i];
            k++;
            }
            }

        }
        int n=2;
for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(str1[i]==vow[j])
            {
                str1[i]=str2[n-1];
                n--;

            }
            }

        }

    for (int k=0;k<6;k++)
    {
        cout<<str1[k];
    }

}
