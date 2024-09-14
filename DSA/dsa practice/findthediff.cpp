#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char diff(string s,string t)
{
    int i=0;
    int j=0;
    char ans;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    while(i<t.length())
    {
        if(s[i]!=t[i])
            return t[i];
            i++;
    }

    return t[t.length()-1];
}
int main()
{
    string s="a";
    string t="aa";
    char ans=diff(s,t);
    cout<<ans;
}
