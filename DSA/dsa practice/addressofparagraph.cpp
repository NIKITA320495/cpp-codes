#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n=2;
    char p[2][1000];
    cin.ignore();
     cout<<"enter";
    for(int i=0;i<2;i++)
    {
        cin.getline(p[i],1000);
    }
    char *par[n];
    for(int i=0;i<n;i++)
    {
        par[i]=p[i];
    }
    cout<<par[0];
    cout<<par[1];
}
