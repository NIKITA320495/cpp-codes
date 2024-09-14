#include<iostream>
using namespace std;
int main()
{
    string str1;
    string str2;
    cout<<"Enter string 1";
    cin>>str1;
    cout<<"Enter string 2";
    cin>>str2;
    int length1;
    for (int i=0;str1[i]!='\0';i++)
    {
        length1++;
    }
    int length2;
    int flag=0;
    for (int i=0;str2[i]!='\0';i++)
    {
        length2++;
    }
    if (length1==length2)
    {
        for (int i=0;i<length1;i++)
        {
            if(str1[i]==str2[i])
            {
                flag++;
            }
        }
        if(flag==length1)
    {
        cout<<"both the strings are equal";
    }
    else
    {
        cout<<"strings are not equal";
    }


    }
    else
        {
            cout<<"strings are not equal";
        }

}

