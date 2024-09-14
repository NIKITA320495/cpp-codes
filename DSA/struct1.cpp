#include<iostream>
using namespace std;
struct student
{
    int rn;
    char name[20];

};
int main()
{
    student s[3];
    for (int i=0;i<3;i++)
    {
        cout<<"Enter the rollnumber";
        cin>>s[i].rn;
        cout<<"Enter name";
        cin>>s[i].name;

    }
    cout<<"Roll number \t\t\t\t Name\n";
    for(int i=0;i<3;i++)
    {

        cout<<s[i].rn<<"\t\t\t\t"<<s[i].name<<"\n";
    }
}
