#include<iostream>
#include<string>
using namespace std;
char diff(string s,string t)
{
    int i=0;
    int j=0;
    char ans;
    int flag=0;
    for(i=0;i<t.length();i++)
    {  flag=0;
        for(j=0;j<s.length();j++)
        {
            if(t[i]==s[j])
            {
                flag++;
                break;
            }

        }
          if(flag==0)
            {
                ans=t[i];
                break;
            }
    }
    if(ans=='\0')
    {
        for(int i=0;i<t.length();i++)
        {
            for(int j=i+1;j<t.length();j++)
            {
                if(t[i]==t[j])
                {
                    ans=t[i];
                    break;
                }
            }
        }
    }
    return ans;
}
int main()
{
    string s="a";
    string t="aa";
    char ans=diff(s,t);
    cout<<ans;
}
