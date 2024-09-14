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
    string rev[3];
    int i=0;
    int j=2;
    int k=0;
    string word[3];
    while(str[i]!='\0')
    {

       while((str[i]!=' ')&&(str[i]!='\0'))
        {
            cout<<str[i];
            word[k]+=str[i];
            i++;
        }
        rev[j]=word[k];
        k++;
        j--;
        cout<<endl;
        if(str[i]==' ')
        {
            i++;
        }
        /*cout<<endl;
        cout<<i;*/
    }
    for(int j=0;j<3;j++)
    {
        cout<<rev[j];
    }
}
