#include<iostream>
#include<string>
using namespace std;
void countword(string text,string str)
{
    int count=0;
    int i=0;
    int j=0;
    int k=0;
    int flag=0;
    for(int i=0;i<text.length();i++)
    {
        if(text[i]==str[0])
        {
            flag=1;
            for(int j=0;j<str.length();j++)
            {
                if(str[j]!=text[j+i])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                count++;
            }
        }
    }
    cout<<count;
}
int main()
{
    string t="her name is nikita.she is a very good girl";
    countword(t,"is");
}
