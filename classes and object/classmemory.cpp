#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    public:
    char name[20];
    void setrollno(int r)
    {
        rollno=r;
    }
    int getrollno()
    {
        return rollno;
    }
};
int main()
{
    student s1;
    student *b=new student;
    b->setrollno(12);


    cout<<b->getrollno();

}

