#include<iostream>
#include<stack>
#include<string>
using namespace std;
int validparenthesis(string s)
{
    int flag=0;
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!st.empty()&&st.top()=='('){
            st.pop();
            flag++;
        }
        }
    }
    return flag;
}
int main()
{
    string s="(())";
    int ans=validparenthesis(s);
    cout<<ans;
}
