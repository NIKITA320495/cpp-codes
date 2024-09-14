#include<iostream>
using namespace std;
class  stu{
int r;
public:
char name[20];
void setrollno(int rn)
{
    r=rn;
}
int getrollno()
{
    return r;
}
};
int main()
{
    stu s1;
    stu *a =new stu;
    a->setrollno(2);
    cout<<a->getrollno();
}
