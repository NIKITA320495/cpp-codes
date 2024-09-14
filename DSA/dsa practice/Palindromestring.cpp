#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s)
{
    string ans;
    for(int i=0; i<s.length(); i++)
    {

        if(s[i]>='a'&& s[i]<='z' || s[i]>=48&& s[i]<=57)
        {
            ans.push_back(s[i]);

        }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
            ans.push_back(s[i]);
            }
    }
    int start=0;
    int end=ans.length()-1;
    while(start<=end)
    {
        if(ans[start]!=ans[end])
        {
            return false;
        }
        start++;
        end--;
    }
 return true;
}

int main()
{
    string b="0P";
    bool an=isPalindrome(b);
    cout<<an;
}
