#include<iostream>
using namespace std;
class student
{
    int rno;
    string name;
    public:
    void setrn();
    void setname();
    void display();
};
void student::setrn()
{
    cout<<"Enter rollno";
    cin>>rno;
}
void student::setname()
{
    cout<<"Enter name";
    cin>>name;
}
void student::display()
{
    cout<<"Rollno="<<rno;
    cout<<"name="<<name;
}
int main()
{
    student s;
    s.setrn();
    s.setname();
    s.display();
}
