#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="HeLLo";
    string ans;
     for(int i=0;i<s.length();i++){
    if(s[i]>='A' && s[i]<='Z'){
    s[i]=s[i]-'A'+'a';
    ans.push_back(s[i]);

            }
     }
            cout<<ans;

}
