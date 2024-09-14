#include<iostream>
using namespace std;
int main()
{
    char ch1[100];
    char ch2[100];
    cout<<"Enter a text";
    gets(ch1);
    cout<<"Enter the word to print its number of occurances";
    gets(ch2);
    int count=0;
    int i,j;
    int flag=0;
    for(i=0;ch1[i]!='\0';i++)
    {   if(ch1[i]==ch2[0])
            {
                flag=1;
                for (j=0;ch2[j]!='\0';j++)
                    {
                        if(ch2[j]!=ch1[i+j])
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
