#include<iostream>
#include<string>
using namespace std;
void comparison(string str1,string str2)
{
    int flag=0;
    if(str1.length()==str2.length())
    {
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]==str2[i])
                flag++;
        }
        if(flag==str1.length())
        {
            cout<<"equal strings";
        }
        else{
            cout<<"unequal";
        }
    }
    else
    {
        cout<<"unequal";
    }
}
int main()
{
    comparison("smile","Smile");
}
