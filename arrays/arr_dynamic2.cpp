#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    int *arr;
    char choice;
    arr=(int *)calloc(1,sizeof(int));
    int i=0;
    do
    {
        cout<<"Enter elements";
        cin>>arr[i];
        i++;
        cout<<"Do you want to continue?";
        cin>>choice;

    }
    while(toupper(choice)=='Y');
    for(int j=0;j<i;j++)
    {
        cout<<arr[j]<<"\t";
    }

}
