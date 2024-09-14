#include<iostream>
using namespace std;
int main()
{
    char ch[6]="hello";
    char vow[6]="aeiou";
    char str3[6];
    int flag=0;
    for (int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(ch[i]==vow[j+i])
            {
                str3[i]=vow[j+i];
            }
        }

    }
    for (int i=0;i<6;i++)
    {
        cout<<str3[i];
    }
}

