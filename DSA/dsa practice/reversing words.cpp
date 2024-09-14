#include<iostream>
using namespace std;
int main()
{
    string s="hello world";
    int count=0 ,i=0;
    for(i=0;s[i]!='\0';i++)
    {
            while(s[i]!=' ')
            {
                cout<<s[i];
                i++;
            }
    }
}
