#include<iostream>
using namespace std;
int main()
{
    string str1="hello";
    string str2="world";
    for (int i=0;i<str1.length();i++)
    {
        if (str1[i]>str2[i])
        {
            cout<<"str1 is greater";
        }
        else if(str1[i]=str2[i])
        {
            cout<<"str2 is greater";
        }
        else
        {
            cout<<"both equal";
        }
    }
}
