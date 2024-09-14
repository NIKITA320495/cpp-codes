#include<iostream>
#include<string>
using namespace std;
void reverseWords(string s) {
        string ans;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==32){
                while(s[i]=32){
                    i++;
                }
                ans.push_back(s[i]);
            }
            else{
                int j=i;
                while(s[j]!=32){
                    j--;
                }
                for(int a=j+1;a<=i;a++){
                    ans.push_back(s[a]);
                }
                i=j;
            }
        }
        cout<<ans;
}
int main()
{
    string s="hello world";
    reverseWords(s);
}
