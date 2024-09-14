#include<iostream>
using namespace std;
class rectangle
{
  float l,b,per,ar;
  public:
      void input_data();
      void perimeter();
      void area();
      void output();


}r1;
void  rectangle::input_data()
{
    cout<<"enter the length of rectangle:";
    cin>>l;
    cout<<"Enter the length of rectangle:";
    cin>>b;
}
void rectangle::perimeter()
{
    per=2*(l+b);

}
void rectangle::area()
{
    ar = l*b;
}
void rectangle::output()
{
    cout<<"Perimeter of rectangle="<<per;
    cout<<"Area of rectangle="<<ar;
}
int main()
{

    r1.input_data();
    r1.perimeter();
    r1.area();
    r1.output();

}
