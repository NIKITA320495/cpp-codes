#include<iostream>
using namespace std;
int main()
{
    string str ="hello world smile";
    int length=0;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
    string rev[length];
    int i=0;
    int k=0;
    while(str[i]!='\0')
    {

       while((str[i]!=' ')&&(str[i]!='\0'))
        {
            cout<<str[i];
            rev[k]+=str[i];
            i++;
        }
        k++;
        cout<<endl;
        if(str[i]==' ')
        {
            i++;
        }
        /*cout<<endl;
        cout<<i;*/
    }
    for(int k=2;k>=0;k--)
    {
        cout<<rev[k];
    }
}
