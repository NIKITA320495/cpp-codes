#include<iostream>
#include<string>
using namespace std;
string minRemoveToMakeValid(string s) {
    int balance=0;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]=='(')
         {
             balance++;
         }
         else if(s[i]==')')
         {
             if(balance==0)
             {s.erase(i,1);
             i--;}
             else{
                balance--;
             }
         }
     }
     balance=0;
     for(int i=s.size()-1;i>0;i--)
     {
          if(s[i]==')')
         {
             balance++;
         }
         else if(s[i]=='(')
         {
             if(balance==0)
             {s.erase(i,1);
             i--;}
             else{
                balance--;
             }
         }
     }
     return s;
    }
int main()
{
    string s=minRemoveToMakeValid("he(llo))");
    cout<<s;

}
