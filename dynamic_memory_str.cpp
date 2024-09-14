#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    char *str=nullptr;
    str=(char *)calloc(5,sizeof(char));
    cout<<"Enter your name";
    gets(str);
    cout<<strlen(str);
    cout<<"Your name is"<<str;
    free(str);

}
