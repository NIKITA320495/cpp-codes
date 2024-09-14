#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter";
    gets(str);
    //cout<<str;
    char *s;
    s=str;
    //cout<<s;
    int i=0;
    while(*s!='\0')
    {
        cout<<s[i];
        s++;
        i++;
    }
}
