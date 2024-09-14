#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int idx(string s,string t)
{
    int count=0;
    int i=0;
    while(i<s.length())
    { count=0;
        if(s[i]==t[0])
        {
            for(int j=0,k=i;j<t.length();j++,k++)
            {
                if(s[k]==t[j])
                {
                    count++;
                }
            }
        }
        if(count==t.length())
            {
                return i;
            }
                else
            {
                    i++;
            }
    }
    return -1;
}
int main()
{
    int c=idx("mississippi","issip");
    cout<<c;
}
