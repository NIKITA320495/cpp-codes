#include<iostream>
using namespace std;
class student
{
    int rollno;
    public:
    char name;
    student()
    {
        cout<<"Constructor called";
    }
    //parametrized constructor
    student(int rollno,char name)
    {
        this->rollno=rollno;
        this->name=name;
    }
    void print()
    {

        cout<<"rollno"<<rollno<<endl;
        cout<<"name"<<name<<endl;
    }

};
int main()
{
    student ram; //calling constructor statically
   student *s=new student;//calling constructor dynamically
   student temp(2,"a");
   temp.print();
}
