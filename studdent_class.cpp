#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
int roll_num;
char name[50];
public:
    void in_data();

    void out_data();



}s[50];
void student::in_data()
{



       cout<<"Enter the roll number of the student:";
       cin>>roll_num;
       cout<<"Enter the name of the student:";
       cin>>name;


}
void student::out_data()
{
        cout<<roll_num<<"\t\t\t\t"<<name<<endl;

}
int main()
{
    int choice;
    char ch;
    int num_student=0;

    do
    {

        cout<<"\nS T U D E N T      R E C O R D\n";
        cout<<"1.  Input\n";
        cout<<"2.  Output\n";
        cout<<"3.  Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {

            case 1:

                do
                {
                    s[num_student].in_data();
                    num_student++;
                    cout<<"do you want to input more records(y/n):";
                    cin>>ch;

                }while((ch=='y')||(ch=='Y'));
            break;
            case 2:
                cout<<"Roll Number\t\tName\n\n";
                for(int i=0;i<num_student;i++)
                {
                    s[i].out_data();
                }
            break;

            case 3:
            cout<<"\nPress any key to exit......";
            exit(0);
            break;
            default:
                cout<<"\nWrong choice";
        }
    }while(choice>=1);

}
