#include<iostream>
#include<string>
using namespace std;
bool solution(string str1,string str2)
{
    int flag=1;
    int n=str1.length();
    int n2=str2.length();
   for(int i=0;i<n2;i++)
   {
       if(str1[n-n2+i]!=str2[i])
       {
           flag=0;
           break;
       }
   }
    if(flag==0)
    return false;
    else
        return true;
}
int main()
{
    bool a=solution("abcde", "ce");
    cout<<a;
}
